%{
	#include<stdio.h>
	int yylex();
	void yyerror(char const* s);
	extern FILE *yyin;
%}

%token TBEGIN DO DIV TEND FUNCTION IF MOD PROGRAM THEN ELSE VAR WHILE
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
	declaration_fonction_procedure
	instruction
	;

declaration_variable: VAR liste_variables POINTVIRGULE
	|
	;

liste_variables: liste_variables POINTVIRGULE declaration_variable
	| declaration_variable
	;

declaration_variable: liste_identifiants DEUXPOINTS type_variable
	;

liste_identifiants: liste_identifiants VIRGULE IDENTIFIANT
	| IDENTIFIANT
	;

declaration_fonction_procedure: liste_fonctions_procedures POINTVIRGULE
	|
	;

liste_fonctions_procedures: liste_fonctions_procedures POINTVIRGULE fonction_procedure
	| fonction_procedure
	;

fonction_procedure: declaration_fonction
	;

declaration_fonction: fonction_entete fonction_bloc
	;

fonction_entete: FUNCTION IDENTIFIANT parametre_fonction DEUXPOINTS type_variable POINTVIRGULE
	;

parametre_fonction: PARENTHESEGAUCHE IDENTIFIANT DEUXPOINTS type_variable PARENTHESEDROITE
	;

fonction_bloc: bloc
	;

instruction: TBEGIN TEND
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