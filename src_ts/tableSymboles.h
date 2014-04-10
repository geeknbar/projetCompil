#ifndef TABS_H
#define TABS_H


typedef struct element element;
typedef element* llist;

llist ajouterEnFin(llist table_symboles, char* symbole, char* type_symb);
llist ajouterEnTete(llist table_symboles, char* symbole);
void afficherListe(llist table_symboles);
int estVide(llist table_symboles);
int rechercherElement(llist table_symboles, char* symbole);
llist ajoutSymbole(llist table_symboles, char* symbole, char* type_symb);
llist ajoutListeSymbole(llist table_symboles, char* listeVariable, char* type_symb);
llist supprimerElementEnTete(llist liste);
void liberationMemoire(llist liste);
char * concat_expression(char * s1, char * op, char * s2);
char * concat_deux_chaines(char * s1, char * s2);
char * alloc_yytext(char * yytext);
#endif