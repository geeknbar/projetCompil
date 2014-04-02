%{
	#include<stdio.h>
	int yylex();
	void yyerror(char const* s);
	extern FILE *yyin;
%}

%token TBEGIN DO DIV TEND FUNCTION IF MOD PROGRAM THEN ELSE VAR WHILE
%token INTEGER STRING REAL BOOLEAN CHAR
%token ASSIGNATION POINT DEUXPOINTS POINTVIRGULE
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
	programme_entete declarations_globales programme_principal POINT
	;

programme_entete:
	PROGRAM IDENTIFIANT POINTVIRGULE
	;

declarations_globales: declaration_globale declaration_globale_recursive
	;

declaration_globale: declaration_variables
	|
	declaration_fonction
	;

declaration_globale_recursive: declarations_globales
	|
	;

declaration_fonction: fonction_entete fonction_bloc
	;

fonction_entete: FUNCTION IDENTIFIANT parametre_fonction DEUXPOINTS type_variable POINTVIRGULE
	;

parametre_fonction: PARENTHESEGAUCHE IDENTIFIANT DEUXPOINTS type_variable PARENTHESEDROITE
	;

fonction_bloc: bloc
	;

bloc: declaration_variables instructions
	| instructions
	;

declaration_variables: declaration_variable declaration_variable_recursive
	;

declaration_variable: VAR IDENTIFIANT DEUXPOINTS type_variable POINTVIRGULE
	;

declaration_variable_recursive: declaration_variables
	|
	;

instructions: TBEGIN instruction TEND POINTVIRGULE
	|
	;

instruction: affectation instruction_recursive
	;

instruction_recursive: instruction
	|
	;

affectation: IDENTIFIANT ASSIGNATION expression POINTVIRGULE
	;

expression: expression ADDITION expression
	| expression MULTIPLICATION expression
	| expression SOUSTRACTION expression
	| expression DIVISION expression
	| NOMBRE
	| IDENTIFIANT
	;

programme_principal: declaration_variables TBEGIN TEND
	| TBEGIN TEND
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