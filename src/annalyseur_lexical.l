%{
	#include<stdio.h>
	#include "tableSymboles.h"
	#include "grammaire.tab.h"
	llist table_sym = NULL;
	int line_no = 1;
%}
A [aA]
B [bB]
C [cC]
D [dD]
E [eE]
F [fF]
G [gG]
H [hH]
I [iI]
J [jJ]
K [kK]
L [lL]
M [mM]
N [nN]
O [oO]
P [pP]
Q [qQ]
R [rR]
S [sS]
T [tT]
U [uU]
V [vV]
W [wW]
X [xX]
Y [yY]
Z [zZ]

CHIFFRE [0-9]
LETTRE[a-zA-Z]
%%

{B}{E}{G}{I}{N}             return(TBEGIN);
{D}{O}                      return(DO);
{D}{I}{V}                   return(DIV);
{E}{N}{D}                   return(TEND);
{F}{U}{N}{C}{T}{I}{O}{N}    return(FUNCTION);
{P}{R}{O}{C}{E}{D}{U}{R}{E} return(PROCEDURE);
{I}{F}                      return(IF);
{M}{O}{D}                   return(MOD);
{P}{R}{O}{G}{R}{A}{M}       return(PROGRAM);
{T}{H}{E}{N}                return(THEN);
{E}{L}{S}{E}                return(ELSE);
{V}{A}{R}                   return(VAR);
{W}{H}{I}{L}{E}             return(WHILE);
{I}{N}{T}{E}{G}{E}{R}       return(INTEGER);
{S}{T}{R}{I}{N}{G}          return(STRING);
{R}{E}{A}{L}                return(REAL);
{B}{O}{O}{L}{E}{A}{N}       return(BOOLEAN);
{C}{H}{A}{R}                return(CHAR);

":="                               return(ASSIGNATION);
"."                                return(POINT);
":"                                return(DEUXPOINTS);
","                                return(VIRGULE);
";"                                return(POINTVIRGULE);

"="                                return(EGAL);
">="                               return(SUPERIEUREGAL);
">"                                return(SUPERIEUR);
"<="                               return(INFERIEUREGAL);
"<"                                return(INFERIEUR);
"<>"                               return(DIFFERENT);

"+"                                return(ADDITION);
"-"                                return(SOUSTRACTION);
"*"                                return(MULTIPLICATION);
"/"                                return(DIVISION);

"("                                return(PARENTHESEGAUCHE);
")"                                return(PARENTHESEDROITE);

{LETTRE}({LETTRE}|{CHIFFRE})* {
	return IDENTIFIANT;
}
{CHIFFRE}{CHIFFRE}*(.{CHIFFRE}{CHIFFRE}*)? {
  yylval.t_float = atof(yytext);
  return NOMBRE;
}

"{"   { register int c;
        while ((c = input()))
        {
          if (c == '}')
            break;
          else if (c == '*')
          {
            if ((c = input()) == ')')
              break;
            else
              unput (c);
          }          
          else if (c == '\n')
            line_no++;
          else if (c == 0)
            commenteof();
        }
    }

[\t] {}

[\n] {line_no++;}

" " {}

%%
commenteof()
{
  fprintf (stderr, "unexpected EOF inside comment at line %d\n", line_no);
  exit (1);
}