#include <stdio.h>
#include <stdlib.h>

int somme_tableau(int tableau[], int tailleTableau);

int main(int argc, char* args[])
{
    int tab[4];

    tab[0]=3;
    tab[1]=5;
    tab[2]=8;
    tab[3]=10;

    int result = somme_tableau(tab[],4);

    printf("Le resultat final est %d !!!", result);

    return 0;
}

int somme_tableau(int tableau[], int tailleTableau)
{
    int temp = 0;

    for(int i=0; i<tailleTableau ; i++){       
        temp = temp + tableau[i];
    }

    return temp;
}