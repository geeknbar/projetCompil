#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "tableSymbolesSecondaires.h"
#include "tableSymboles.h"

typedef struct element element;
typedef element* llistSecond;
struct element
{
    llistSecond *listeSecond;
    struct element *nxt;
};

llistSecond ajouterEnFinSecondaire(llistSecond table_symboles, llistSecond listeSecondaire)
{
    /* On crée un nouvel élément */
    element* nouvelElement = malloc(sizeof(element));
 
    /* On assigne la valeur au nouvel élément */
    nouvelElement->listeSecond = &listeSecondaire;

    /* On ajoute en fin, donc aucun élément ne va suivre */
    nouvelElement->nxt = NULL;
 
    if(table_symboles == NULL)
    {
        /* Si la liste est videé il suffit de renvoyer l'élément créé */
        return nouvelElement;
    }
    else
    {
        /* Sinon, on parcourt la liste à l'aide d'un pointeur temporaire et on
        indique que le dernier élément de la liste est relié au nouvel élément */
        element* temp=table_symboles;
        while(temp->nxt != NULL)
        {
            temp = temp->nxt;
        }
        temp->nxt = nouvelElement;
        return table_symboles;
    }
    return NULL;
}

void afficherListeSecondaire(llistSecond table_symboles)
{
    // element *tmp = table_symboles;
    // /* Tant que l'on n'est pas au bout de la liste */
    // int i = 1;
    // while(tmp != NULL)
    // {
    //     /* On affiche */
    //     printf("Symbole %d : %s, Type : %s , occurence :%d \n", i, tmp->symb, tmp->type, tmp->occurence);
    //     // printf("%s \n", tmp->symb);
    //     /* On avance d'une case */
    //     tmp = tmp->nxt;
    //     i++;
    // }
}

