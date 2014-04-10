#ifndef TRANSLATE_H
#define TRANSLATE_H


typedef struct element element;
typedef element * llist;

llist affichage;

void ajouterEnFin(char* chaine);
//llist ajouterEnTete(char* chaine);
void afficherListe();
int estVide();
//int rechercherElement(char* chaine);
//llist ajoutSymbole(char* chaine);
llist supprimerElementEnTete();
void impression();
void liberationMemoire();
char * concat_expression(char * s1, char * op, char * s2);
char * concat_deux_chaines(char * s1, char * s2);
char * alloc_yytext(char * yytext);

#endif