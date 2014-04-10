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

%type <t_string> expression;
%type <t_string> liste_identifiants;
%type <t_string> declaration_variables;
%type <t_string> type_variable;
%type <t_string> comparaison;

%%

programme:
	programme_entete bloc POINT 
	;

programme_entete:
	PROGRAM IDENTIFIANT POINTVIRGULE { ajouterEnFin("#include <stdio.h>"); }
	;

bloc: declaration_variable
	declaration_fonction
	declaration_procedure
	instruction
	;

declaration_variable: VAR liste_variables POINTVIRGULE
	|
	;

liste_variables: liste_variables POINTVIRGULE declaration_variables
	| declaration_variables
	;

declaration_variables: liste_identifiants DEUXPOINTS type_variable { 
																	if(strcmp($3,"integer") == 0) {
																		char * s = malloc(sizeof("int " + sizeof($1) + sizeof(";")));
																		strcat(s,"int ");
																		strcat(s,$1);
																		strcat(s,";");
																		ajouterEnFin(s);
																	}  
																	}
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

declaration_fonctions: fonction_entete bloc
	;

declaration_procedures: procedure_entete bloc
	;

fonction_entete: FUNCTION IDENTIFIANT parametres DEUXPOINTS type_variable POINTVIRGULE
	;

procedure_entete: PROCEDURE IDENTIFIANT parametres POINTVIRGULE
	;

parametres: PARENTHESEGAUCHE liste_parametres PARENTHESEDROITE
	;

liste_parametres: liste_parametres VIRGULE declaration_variables
	| declaration_variables
	;

instruction: TBEGIN instruction_list TEND
	;

instruction_list: instruction_list POINTVIRGULE instructions
	| instructions
	;

instructions: instruction_assignement
	| instruction_while
	| instruction_if
	| instruction
	|
	;

instruction_assignement: IDENTIFIANT ASSIGNATION expression {  }
	;

instruction_while: WHILE expressions DO instructions
	;

instruction_if: IF expressions THEN instructions POINTVIRGULE
	;

expressions: comparaison
	|
	NOMBRE
	;

comparaison: expression INFERIEUREGAL expression { $$ = concat_expression($1,$2,$3); }
	| 
	expression INFERIEUR expression { $$ = concat_expression($1,$2,$3); }
	|
	expression EGAL expression { $$ = concat_expression($1,$2,$3); }
	|
	expression SUPERIEUR expression { $$ = concat_expression($1,$2,$3); }
	|
	expression SUPERIEUREGAL expression { $$ = concat_expression($1,$2,$3); }
	;

expression: expression MULTIPLICATION expression { $$ = concat_expression($1,$2,$3); }
	|
	expression ADDITION expression { $$ = concat_expression($1,$2,$3); }
	|
	expression SOUSTRACTION expression { $$ = concat_expression($1,$2,$3); }
	|
	expression DIVISION expression { $$ = concat_expression($1,$2,$3); }
	|
	PARENTHESEGAUCHE expression PARENTHESEDROITE { $$ = concat_expression($1,$2,$3); }
	|
	NOMBRE { $$ = $1; }
	|
	IDENTIFIANT { $$ = $1; }
	;

type_variable : STRING { $$ = $1; }
	| INTEGER { $$ = $1; }
	| REAL { $$ = $1; }
	| BOOLEAN { $$ = $1; }
	| CHAR { $$ = $1; }
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