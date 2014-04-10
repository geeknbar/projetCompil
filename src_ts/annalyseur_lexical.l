%{
	#include<stdio.h>
	#include "grammaire.tab.h"
  #include "tableSymboles.h"
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

{B}{E}{G}{I}{N}             { yylval.t_string = "begin"; return(TBEGIN); }
{D}{O}                      { yylval.t_string = "do"; return(DO); }
{D}{I}{V}                   { yylval.t_string = "div"; return(DIV); }
{E}{N}{D}                   { yylval.t_string = "end"; return(TEND); }
{F}{U}{N}{C}{T}{I}{O}{N}    { yylval.t_string = "function"; return(FUNCTION); }
{P}{R}{O}{C}{E}{D}{U}{R}{E} { yylval.t_string = "procedure"; return(PROCEDURE); }
{I}{F}                      { yylval.t_string = "if"; return(IF); }
{M}{O}{D}                   { yylval.t_string = "mod"; return(MOD); }
{P}{R}{O}{G}{R}{A}{M}       { yylval.t_string = "program"; return(PROGRAM); }
{T}{H}{E}{N}                { yylval.t_string = "then"; return(THEN); }
{E}{L}{S}{E}                { yylval.t_string = "else"; return(ELSE); }
{V}{A}{R}                   { yylval.t_string = "var"; return(VAR); }
{W}{H}{I}{L}{E}             { yylval.t_string = "while"; return(WHILE); }
{I}{N}{T}{E}{G}{E}{R}       { yylval.t_string = "integer"; return(INTEGER); }
{S}{T}{R}{I}{N}{G}          { yylval.t_string = "string"; return(STRING); }
{R}{E}{A}{L}                { yylval.t_string = "real"; return(REAL); }
{B}{O}{O}{L}{E}{A}{N}       { yylval.t_string = "boolean"; return(BOOLEAN); }
{C}{H}{A}{R}                { yylval.t_string = "char"; return(CHAR); }

":="                               { yylval.t_string = alloc_yytext(yytext); return(ASSIGNATION); }
"."                                { yylval.t_string = alloc_yytext(yytext); return(POINT); }
":"                                { yylval.t_string = alloc_yytext(yytext); return(DEUXPOINTS); }
","                                { yylval.t_string = alloc_yytext(yytext); return(VIRGULE); }
";"                                { yylval.t_string = alloc_yytext(yytext); return(POINTVIRGULE); }

"="                                { yylval.t_string = alloc_yytext(yytext); return(EGAL); }
">="                               { yylval.t_string = alloc_yytext(yytext); return(SUPERIEUREGAL); }
">"                                { yylval.t_string = alloc_yytext(yytext); return(SUPERIEUR); }
"<="                               { yylval.t_string = alloc_yytext(yytext); return(INFERIEUREGAL); }
"<"                                { yylval.t_string = alloc_yytext(yytext); return(INFERIEUR); }
"<>"                               { yylval.t_string = alloc_yytext(yytext); return(DIFFERENT); }

"+"                                { yylval.t_string = alloc_yytext(yytext); return(ADDITION); }
"-"                                { yylval.t_string = alloc_yytext(yytext); return(SOUSTRACTION); }
"*"                                { yylval.t_string = alloc_yytext(yytext); return(MULTIPLICATION); }
"/"                                { yylval.t_string = alloc_yytext(yytext); return(DIVISION); }

"("                                { yylval.t_string = alloc_yytext(yytext); return(PARENTHESEGAUCHE); }
")"                                { yylval.t_string = alloc_yytext(yytext); return(PARENTHESEDROITE); }

{LETTRE}({LETTRE}|{CHIFFRE})* {
  yylval.t_string = alloc_yytext(yytext);
  return IDENTIFIANT;
}

{CHIFFRE}{CHIFFRE}*(.{CHIFFRE}{CHIFFRE}*)? {
  yylval.t_string = alloc_yytext(yytext);
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