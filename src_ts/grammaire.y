%{
	#include<stdio.h>
	#include<string.h>
	#include"tableSymboles.h"
	int yylex();
	void yyerror(char const* s);
	extern FILE *yyin;
	llist table_sym = NULL;
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
%type <t_string> type_variable;
%type <t_string> liste_identifiants;
%%

programme:
	programme_entete bloc POINT 
	;

programme_entete:
	PROGRAM IDENTIFIANT POINTVIRGULE { table_sym = ajoutSymbole(table_sym, $2, "nom programme");}
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

declaration_variables: liste_identifiants DEUXPOINTS type_variable { table_sym = ajoutSymbole(table_sym, $1, $3);
																																			printf("liste_id %s\n",$1);}
	;

liste_identifiants: liste_identifiants VIRGULE IDENTIFIANT {$$ = $3;/*n'arrive pas a récupérer cet identifiant avant la virgule*/}
	| IDENTIFIANT {$$ = $1;}
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

fonction_entete: FUNCTION IDENTIFIANT parametres DEUXPOINTS type_variable POINTVIRGULE {
									char str[80];
									strcpy (str,"fonction ");
									strcat (str,$5);
									table_sym = ajoutSymbole(table_sym, $2, str);
									}
	;

procedure_entete: PROCEDURE IDENTIFIANT parametres POINTVIRGULE { table_sym = ajoutSymbole(table_sym, $2, "void");}
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

instruction_assignement: IDENTIFIANT ASSIGNATION expression { table_sym = ajoutSymbole(table_sym, $1, "assignement");
/* ici il ne faut pas faire un ajout mais faire une vérification*/}
	;

instruction_while: WHILE expressions DO instructions
	;

instruction_if: IF expressions THEN instructions POINTVIRGULE
	;

expressions: comparaison
	|
	NOMBRE
	;

comparaison: expression INFERIEUREGAL expression
	| 
	expression INFERIEUR expression
	|
	expression EGAL expression
	|
	expression SUPERIEUR expression
	|
	expression SUPERIEUREGAL expression
	;

expression: expression MULTIPLICATION expression
	|
	expression ADDITION expression
	|
	expression SOUSTRACTION expression
	|
	expression DIVISION expression
	|
	PARENTHESEGAUCHE expression PARENTHESEDROITE
	|
	NOMBRE
	|
	IDENTIFIANT { table_sym = ajoutSymbole(table_sym, $1, "variable expression");
	/* ici il ne faut pas faire un ajout mais faire une vérification*/}
	;

type_variable : STRING {char* s = "string"; $$ =s;}
	| INTEGER {char* s = "integer"; $$ =s;}
	| REAL {char* s = "reel"; $$ =s;}
	| BOOLEAN {char* s = "booleen"; $$ =s;}
	| CHAR {char* s = "char"; $$ =s;}
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
	if(f!=NULL)
		fclose(f);

	afficherListe(table_sym);
	liberationMemoire(table_sym);
}

void yyerror(char const* s){
	fprintf(stderr, "Erreur %s\n", s);
}