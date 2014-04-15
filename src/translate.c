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

char * concat_deux_chaines(char * s1, char * s2) {
    char * s = malloc(sizeof(s1) + sizeof(s2)); 
    strcat(s,s1);
    strcat(s,s2);
    return s;  
}

char * concat_trois_chaines(char * s1, char * op, char * s2) {
    char * s = malloc(sizeof(s1) + sizeof(op) + sizeof(s2)); 
    strcat(s,s1);
    strcat(s,op);
    strcat(s,s2);
    return s;  
}

char * alloc_yytext(char * yytext) {
    char * test = malloc(sizeof(yytext));
    strcpy(test, yytext);
    return test;
}

void traduction() {
    element * curseur = affichage;

    char * nomFonction = "";
    char * parametresFonction = "";
    char * typeRetourFonction = "";

    int declaration_variables = 0;
    int boucle_if = 0;
    int boucle_while = 0;

    printf("Nom du programme : %s\n\n", curseur->code);
    curseur = curseur->nxt;
    printf("#include <stdio.h>\n");
    while(curseur != NULL)
    {

        char * duplicata = strdup(curseur->code);
        char * tokens = strsep(&duplicata, " ");

        if (declaration_variables == 0) {
            if (strcmp("function", tokens) == 0) {
                nomFonction = strsep(&duplicata, " ");
            } else if (strcmp("param", tokens) == 0) {
                char * variables = strsep(&duplicata, ":");
                char * type = strsep(&duplicata, ":");
                char * dupvar = strdup(variables);
                char * token = strsep(&dupvar, ",");
                int nbParam = 0;
                while(token != NULL) {
                    if (nbParam == 0) {
                        char * unParametre = concat_trois_chaines(conversionType(type)," ",token);
                        parametresFonction = concat_deux_chaines(parametresFonction,unParametre); 
                        nbParam++;
                    } else {
                        char * unParametre = concat_trois_chaines(conversionType(type)," ",token);
                        parametresFonction = concat_trois_chaines(parametresFonction,",",unParametre); 
                        nbParam++;
                    }
                    
                    token = strsep(&dupvar, ",");
                }
            } else if (strcmp("type_return", tokens) == 0) {
                typeRetourFonction = conversionType(strsep(&duplicata, " "));
            } else if (strcmp("fin_declaration", tokens) == 0) {
                printf("%s %s (%s) \n{\n",typeRetourFonction,nomFonction,parametresFonction);
            } else if (strcmp("declaration_variables", tokens) == 0) {
                declaration_variables = 1;
            } else if (strcmp("begin", tokens) == 0) {
                //printf(" DEBUT DE LA FONCTION \n");
            } else if (strcmp("if", tokens) == 0) {
                char * condition = strsep(&duplicata, " ");
                printf("if (%s) \n{\n",condition);
            } else if (strcmp("while", tokens) == 0) {
                boucle_while = 1;
            } else if (strcmp("assignation", tokens) == 0) {
                
            } else {
                printf("%s\n", curseur->code);
            }
        } else {
            // Mode déclaration de variables;

            char * types = strsep(&tokens, ";");

            while (types != NULL) {
                char * variables = strsep(&types, ":");
                char * type = strsep(&types, ":");
                printf("%s;\n",concat_trois_chaines(conversionType(type)," ",variables));
                types = strsep(&tokens, ";");
            }

            declaration_variables = 0;
        }
        

        curseur = curseur->nxt;
    }
}

char * conversionType(char * type) {
    if (strcmp("integer", type) == 0) {
        return "int";
    }
    if (strcmp("real", type) == 0) {
        return "float";
    }
    if (strcmp("string", type) == 0) {
        return "char *";
    }
    if (strcmp("char", type) == 0) {
        return "char";
    }
    if (strcmp("boolean", type) == 0) {
        return "int";
    }

    return "NO_TYPE";
}