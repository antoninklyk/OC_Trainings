#include <stdio.h>
#include <stdlib.h>

/* Pieges pointeurs : si initialisation bien les initialiser à NULL, Bien passer l'addresse et pas la variable dans la fonction !!!!, bien jouer sur les valeurs de la case donc *pointeur dans la fonction */

void decoupeMinute(int *pSurMinute, int *pSurHeure);

int main(int argc, char* args[]){

    int minute = 90;
    int heure = 0;

    decoupeMinute(&minute, &heure);

    printf("%d : %d\n", heure, minute);

    return 0;
}


void decoupeMinute(int *pSurMinute, int *pSurHeure)
{
    *pSurHeure = *pSurMinute / 60 ;
    *pSurMinute = *pSurMinute % 60 ;
}