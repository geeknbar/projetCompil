all: prog
prog: grammaire.tab.o lex.yy.o tableSymboles.o
	gcc -o $@ $^ -lfl
grammaire.tab.o: grammaire.tab.c grammaire.tab.h 
	gcc -o $@ -c grammaire.tab.c
grammaire.tab.c grammaire.tab.h: grammaire.y 
	bison grammaire.y --defines=grammaire.tab.h
tableSymboles.o: tableSymboles.h tableSymboles.c
	gcc -o $@ -c tableSymboles.c
lex.yy.o: lex.yy.c
	gcc -o $@ -c lex.yy.c
lex.yy.c: annalyseur_lexical.l grammaire.tab.h
	flex annalyseur_lexical.l
clean:
	rm prog *.o