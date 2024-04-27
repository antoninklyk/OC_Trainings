#include <stdio.h>
#include <stdlib.h>

/*  a == valeur de a
    &a == addresse de la valeur de a
    psura == variable qui stock l'addresse de la valeur de a
    *psura == valeur de a
    &psura == addresse ou se trouve le pointeur

    */

void decoupeMinute(int *pSurMinute, int *pSurHeure);

int main(int argc, char* args[])
{   
    int minute = 100;
    int heure = 0;

    decoupeMinute(&minute, &heure);
    printf("%d : %d\n", heure, minute);
    return 0;
}

void decoupeMinute(int *pSurMinute, int *pSurHeure)
{
    *pSurHeure = *pSurMinute / 60;
    *pSurMinute %= 60;
}
