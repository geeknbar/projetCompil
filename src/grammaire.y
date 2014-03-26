%{
	#include<stdio.h>
	int yylex();
	void yyerror(char const* s);
	extern FILE *yyin;
%}

%token ASSIGNMENT COLON DIV DO DOT
%token ELSE END EQUAL
%token FUNCTION GE GT IDENTIFIER IF
%token LE LPAREN LT MINUS MOD NOTEQUAL
%token PBEGIN PLUS
%token PROGRAM RPAREN
%token SEMICOLON DIVQUOT MULTIPLICAT THEN
%token VAR WHILE

%error-verbose

%%

program : program_tete semicolon DOT;

program_tete : PROGRAM identifier;

identifier : IDENTIFIER;

semicolon : SEMICOLON;

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