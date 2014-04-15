%{
	#include<stdio.h>
	#include<string.h>
	#include"translate.h"
	int yylex();
	void yyerror(char const* s);
	extern FILE *yyin;
%}

%token <t_string> TBEGIN DO DIV TEND FUNCTION PROCEDURE IF MOD PROGRAM THEN ELSE VAR WHILE
%token <t_string> INTEGER STRING REAL BOOLEAN CHAR
%token <t_string> ASSIGNATION POINT DEUXPOINTS VIRGULE POINTVIRGULE
%token <t_string> EGAL SUPERIEUREGAL SUPERIEUR INFERIEUREGAL INFERIEUR DIFFERENT
%token <t_string> ADDITION SOUSTRACTION MULTIPLICATION DIVISION
%token <t_string> PARENTHESEGAUCHE PARENTHESEDROITE
%token <t_string> APOSTROPHE
%token <t_string> NOMBRE
%token <t_string> IDENTIFIANT

%left ADDITION SOUSTRACTION
%left MULTIPLICATION DIVISION
%left INFERIEUR SUPERIEUR
%left EGAL

%error-verbose

%union {
	int t_int;
	float t_float;
	char * t_string;
}

%type <t_string> programme;
%type <t_string> programme_entete;
%type <t_string> bloc;
%type <t_string> declaration_variable;
%type <t_string> liste_variables;
%type <t_string> declaration_variables;
%type <t_string> liste_identifiants;
%type <t_string> declaration_fonction;
%type <t_string> declaration_procedure;
%type <t_string> liste_fonctions;
%type <t_string> liste_procedures;
%type <t_string> declaration_fonctions;
%type <t_string> declaration_procedures;
%type <t_string> fonction_entete;
%type <t_string> procedure_entete;
%type <t_string> parametres;
%type <t_string> liste_parametres;
%type <t_string> instruction;
%type <t_string> instruction_list;
%type <t_string> instructions;
%type <t_string> instruction_assignement;
%type <t_string> instruction_while;
%type <t_string> instruction_if;
%type <t_string> expressions;
%type <t_string> comparaison;
%type <t_string> expression;
%type <t_string> type_variable;

%%

programme:
	programme_entete bloc POINT 
	;

programme_entete:
	PROGRAM IDENTIFIANT POINTVIRGULE { ajouterEnFin($2); }
	;

bloc: declaration_variable
	declaration_fonction
	declaration_procedure
	instruction 
	;

declaration_variable: VAR liste_variables POINTVIRGULE 
	|
	;

liste_variables: liste_variables POINTVIRGULE declaration_variables { ajouterEnFin(concat_deux_chaines($1,$3)); }
	| declaration_variables { ajouterEnFin($1); }
	;

declaration_variables: liste_identifiants DEUXPOINTS type_variable { $$ = concat_expression($1,$2,$3); }
	;

liste_identifiants: liste_identifiants VIRGULE IDENTIFIANT { $$ = concat_expression($1,$2,$3); }
	| IDENTIFIANT { $$ = $1; }
	;

declaration_fonction: liste_fonctions POINTVIRGULE declaration_variable
	|
	;

declaration_procedure: liste_procedures POINTVIRGULE declaration_variable 
	|
	;

liste_fonctions: liste_fonctions POINTVIRGULE declaration_fonctions 
	| declaration_fonctions 
	;

liste_procedures: liste_procedures POINTVIRGULE declaration_procedures 
	| declaration_procedures 
	;

declaration_fonctions: fonction_entete bloc { ajouterEnFin(concat_deux_chaines("fin_fonction ",$1)); }
	;

declaration_procedures: procedure_entete bloc 
	;

fonction_entete: FUNCTION IDENTIFIANT parametres DEUXPOINTS type_variable POINTVIRGULE { 
				ajouterEnFin(concat_expression($1," ",$2)); 
				ajouterEnFin(concat_deux_chaines("param ",$3));
				ajouterEnFin(concat_deux_chaines("type_return ", $5));
				ajouterEnFin(concat_deux_chaines("fin_declaration ",$2));
				$$ = $2;
				}
	;

procedure_entete: PROCEDURE IDENTIFIANT parametres POINTVIRGULE 
	;

parametres: PARENTHESEGAUCHE liste_parametres PARENTHESEDROITE { $$ = $2; }
	;

liste_parametres: liste_parametres VIRGULE declaration_variables { $$ = concat_expression($1,$2,$3); }
	| declaration_variables 
	;

instruction: 	TBEGIN				{ ajouterEnFin("begin"); }
				instruction_list 
				POINTVIRGULE 
				TEND 				
	;

instruction_list: instruction_list POINTVIRGULE instructions 
	| instructions 
	| 
	;

instructions: instruction_assignement
	| instruction_while 				
	| instruction_if 									
	| instruction 						
	;

instruction_assignement: IDENTIFIANT ASSIGNATION expression 	{ ajouterEnFin(concat_expression($1,$2,$3)); }
	;

instruction_while: WHILE expressions DO instructions 			{ ajouterEnFin(concat_expression($1,$2,$3)); }
	;

instruction_if: IF 				
				expressions 	
				THEN 			{ ajouterEnFin(concat_expression($1,$2,$3)); }
				instructions 
				POINTVIRGULE 		
	;

expressions: comparaison 	{ $$ = $1; } 	 	
	|
	NOMBRE 					{ $$ = $1; }	
	;

comparaison: expression INFERIEUREGAL expression 	{ $$ = concat_expression($1,$2,$3); }	
	| 
	expression INFERIEUR expression 				{ $$ = concat_expression($1,$2,$3); }				
	|
	expression EGAL expression 						{ $$ = concat_expression($1,$2,$3); }
	|
	expression SUPERIEUR expression 				{ $$ = concat_expression($1,$2,$3); }
	|
	expression SUPERIEUREGAL expression 			{ $$ = concat_expression($1,$2,$3); }
	;

expression: expression MULTIPLICATION expression 	{ $$ = concat_expression($1,$2,$3); }
	|
	expression ADDITION expression 					{ $$ = concat_expression($1,$2,$3); }
	|
	expression SOUSTRACTION expression 				{ $$ = concat_expression($1,$2,$3); }
	|
	expression DIVISION expression 					{ $$ = concat_expression($1,$2,$3); }
	|
	PARENTHESEGAUCHE expression PARENTHESEDROITE 	{ $$ = concat_expression($1,$2,$3); }
	|
	NOMBRE 											{ $$ = $1; }
	|
	IDENTIFIANT 									{ $$ = $1; }
	;

type_variable : STRING 	{ $$ = $1; }
	| INTEGER 			{ $$ = $1; }
	| REAL 				{ $$ = $1; }
	| BOOLEAN 			{ $$ = $1; }
	| CHAR 				{ $$ = $1; }
	;

%%

int main(int argc, char* argv[]){
	FILE *f = NULL;
	if(argc >1) {
		f = fopen(argv[1],"r");
			if(f==NULL){
				return -1;
			}
			yyin=f;
	}
	yyparse();
	impression();
	if(f!=NULL)
		fclose(f);
}

void yyerror(char const* s){
	fprintf(stderr, "Erreur %s\n", s);
}