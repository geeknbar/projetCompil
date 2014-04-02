%{
	#include<stdio.h>
	int yylex();
	void yyerror(char const* s);
	extern FILE *yyin;
%}

%token TBEGIN DO DIV TEND FUNCTION PROCEDURE IF MOD PROGRAM THEN ELSE VAR WHILE
%token INTEGER STRING REAL BOOLEAN CHAR
%token ASSIGNATION POINT DEUXPOINTS VIRGULE POINTVIRGULE
%token EGAL SUPERIEUREGAL SUPERIEUR INFERIEUREGAL INFERIEUR DIFFERENT
%token ADDITION SOUSTRACTION MULTIPLICATION DIVISION
%token PARENTHESEGAUCHE PARENTHESEDROITE
%token NOMBRE
%token IDENTIFIANT

%left ADDITION SOUSTRACTION
%left MULTIPLICATION DIVISION

%error-verbose

%%

programme:
	programme_entete bloc POINT
	;

programme_entete:
	PROGRAM IDENTIFIANT POINTVIRGULE
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

declaration_variables: liste_identifiants DEUXPOINTS type_variable
	;

liste_identifiants: liste_identifiants VIRGULE IDENTIFIANT
	| IDENTIFIANT
	;

declaration_fonction: liste_fonctions POINTVIRGULE
	|
	;

declaration_procedure: liste_procedures POINTVIRGULE
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

instructions: instruction_simple
	| instruction_complexe
	;


instruction_simple: instruction_while_simple
	| instruction_if_simple
	;

instruction_complexe: instruction_assignement
	| instruction_while_complexe
	| instruction
	|
	;

instruction_assignement: IDENTIFIANT ASSIGNATION expression
	;

instruction_while_simple: WHILE expression DO instruction_simple
	;

instruction_while_complexe: WHILE expression DO instruction_complexe
	;

instruction_if_simple: IF expression THEN
	;

expression:
	expression MULTIPLICATION expression
	|
	expression ADDITION expression
	|
	expression SOUSTRACTION expression
	|
	expression DIVISION expression
	|
	NOMBRE
	;

type_variable : STRING
	| INTEGER
	| REAL
	| BOOLEAN
	| CHAR
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
}

void yyerror(char const* s){
	fprintf(stderr, "Erreur %s\n", s);
}