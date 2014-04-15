#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "tableSymbolesSecondaires.h"
#include "tableSymboles.h"

typedef struct element_S element_S;
typedef element_S* llistSecond;
struct element_S
{
    llist *listeSecond;
    struct element_S *nxt;
};

llistSecond ajouterEnFinSecondaire(llistSecond table_symboles, llist listeSecondaire)
{
    /* On crée un nouvel élément */
    element_S* nouvelElement_S = malloc(sizeof(element_S));
 
    /* On assigne la valeur au nouvel élément */
    nouvelElement_S->listeSecond = &listeSecondaire;

    /* On ajoute en fin, donc aucun élément ne va suivre */
    nouvelElement_S->nxt = NULL;
 
    if(table_symboles == NULL)
    {
        /* Si la liste est videé il suffit de renvoyer l'élément créé */
        return nouvelElement_S;
    }
    else
    {
        /* Sinon, on parcourt la liste à l'aide d'un pointeur temporaire et on
        indique que le dernier élément de la liste est relié au nouvel élément */
        element_S* temp=table_symboles;
        while(temp->nxt != NULL)
        {
            temp = temp->nxt;
        }
        temp->nxt = nouvelElement_S;
        return table_symboles;
    }
    return NULL;
}

void afficherListeSecondaire(llistSecond table_symboles)
{
    // element_S *tmp = table_symboles;
    // /* Tant que l'on n'est pas au bout de la liste */
    // int i = 1;
    // while(tmp != NULL)
    // {
    //     llist* toto = tmp->listeSecond;
    //     afficherListe((*toto));
    //     tmp = tmp->nxt;
    //     printf("%d\n", i);
    //     i++;
    // }
}

