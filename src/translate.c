#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "translate.h"

typedef struct element element;
typedef element * llist;
struct element
{
    // int val;
    char * code;
    struct element *nxt;
    int occurence;
};

llist affichage;

void ajouterEnFin(char* chaine)
{
    /* On crée un nouvel élément */
    element* nouvelElement = malloc(sizeof(element));
 
    /* On assigne la valeur au nouvel élément */
    nouvelElement->code = chaine;

    /* On met le nombre d'occurence à 1 */
    nouvelElement->occurence = 1;
 
    /* On ajoute en fin, donc aucun élément ne va suivre */
    nouvelElement->nxt = NULL;
 
    if(affichage == NULL)
    {
        /* Si la liste est videé il suffit de renvoyer l'élément créé */
        affichage = nouvelElement;
    }
    else
    {
        /* Sinon, on parcourt la liste à l'aide d'un pointeur temporaire et on
        indique que le dernier élément de la liste est relié au nouvel élément */
        element* temp=affichage;
        while(temp->nxt != NULL)
        {
            temp = temp->nxt;
        }
        temp->nxt = nouvelElement;
    }
}

//llist ajouterEnTete(char* chaine)
//{
//    /* On crée un nouvel élément */
//    element* nouvelElement = malloc(sizeof(element));
// 
//    /* On assigne la valeur au nouvel élément */
//    nouvelElement->code = chaine;
// 
//    /* On assigne l'adresse de l'élément suivant au nouvel élément */
//    nouvelElement->nxt = affichage;
// 
//    /* On retourne la nouvelle liste, i.e. le pointeur sur le premier élément */
//    return nouvelElement;
//}

void afficherListe()
{
    element * tmp = affichage;
    /* Tant que l'on n'est pas au bout de la liste */
    int i = 1;
    while(tmp != NULL)
    {
        /* On affiche */
        printf("Symbole %d : %s, occurence :%d \n", i, tmp->code, tmp->occurence);
        // printf("%s \n", tmp->code);
        /* On avance d'une case */
        tmp = tmp->nxt;
        i++;
    }
}

int estVide()
{
    return (affichage == NULL)? 1 : 0;
}

//int rechercherElement(char* chaine)
//{
//    element *tmp=affichage;
//    /* Tant que l'on n'est pas au bout de la liste */
//    while(tmp != NULL)
//    {
//        if(strcmp(tmp->code, chaine)==0)
//        {
//            /* Si l'élément a la valeur recherchée, on renvoie son adresse */
//            //problème si on le laisse ce free , a revoir
//            // free(tmp);
//            /* On augmente le nombre d'occurence de 1*/
//            tmp->occurence +=1;
//            return 1;
//        }
//        tmp = tmp->nxt;
//    }
//    free(tmp);
//    return 0;
//}

//llist ajoutSymbole(char* chaine)
//{
//    char* code;
//    code = malloc(strlen(chaine) + 1);
//    strcpy(code, chaine);
//    if (rechercherElement(affichage, code)==0)
//    {
//        affichage = ajouterEnFin(affichage, code);
//    } 
//    else
//    {
//        free(code);
//    }
//    return affichage;
//}

llist supprimerElementEnTete()
{
    if(affichage != NULL)
    {
        /* Si la affichage est non vide, on se prépare à renvoyer l'adresse de
        l'élément en 2ème position */
        element* aRenvoyer = affichage->nxt;
        /* On libère le premier élément */
        free(affichage->code);
        free(affichage);
        /* On retourne le nouveau début de la affichage */
        return aRenvoyer;
    }
    else
    {
        return NULL;
    }
}

void impression() {
    element * tmp = affichage;
    /* Tant que l'on n'est pas au bout de la liste */
    while(tmp != NULL)
    {
        /* On affiche */
        printf("%s\n", tmp->code);
        // printf("%s \n", tmp->code);
        /* On avance d'une case */
        tmp = tmp->nxt;
    }
}

void liberationMemoire()
{
    while(affichage != NULL)
    {
        affichage = supprimerElementEnTete(affichage);
    }
    free(affichage);
}

char * concat_expression(char * s1, char * op, char * s2) {
    char * s = malloc(sizeof(s1) + sizeof(op) + sizeof(s2)); 
    strcat(s,s1);
    strcat(s,op);
    strcat(s,s2);
    return s;  
}

char * concat_deux_chaines(char * s1, char * s2) {
    char * s = malloc(sizeof(s1) + sizeof(s2)); 
    strcat(s,s1);
    strcat(s,s2);
    return s;  
}

char * alloc_yytext(char * yytext) {
    char * test = malloc(sizeof(yytext));
    strcpy(test, yytext);
    return test;
}