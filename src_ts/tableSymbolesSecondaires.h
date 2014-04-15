#ifndef TABSS_H
#define TABSS_H


typedef struct element element;
typedef element* llistSecond;

llistSecond ajouterEnFinSecondaire(llistSecond table_symboles, llistSecond listeSecondaire);
void afficherListeSecondaire(llistSecond table_symboles);
#endif