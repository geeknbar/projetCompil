#ifndef TABSS_H
#define TABSS_H
#include "tableSymboles.h"

typedef struct element_S element_S;
typedef element_S* llistSecond;

llistSecond ajouterEnFinSecondaire(llistSecond table_symboles, llist listeSecondaire);
void afficherListeSecondaire(llistSecond table_symboles);
#endif