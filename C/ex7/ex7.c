#include <stdio.h>
#include <stdlib.h>

void tripleNombre(int *pointeurSurNombre);


int main(int argc, char* args[])
{
    int nombre = 3;

    tripleNombre(&nombre);

    printf("Le nombre vaut : %d\n", nombre);

    return 0;
}

void tripleNombre(int *pointeurSurNombre)
{
    *pointeurSurNombre = *pointeurSurNombre * 3;
}

/* AUTRE FACON
void triplePointeur(int *pointeurSurNombre);

int main(int argc, char *argv[])
{
    int nombre = 5;
    int *pointeur = &nombre; // pointeur prend l'adresse de nombre

    triplePointeur(pointeur); // On envoie pointeur (l'adresse de nombre) à la fonction
    printf("%d", *pointeur); // On affiche la valeur de nombre avec *pointeur

    return 0;
}

void triplePointeur(int *pointeurSurNombre)
{
    *pointeurSurNombre *= 3; // On multiplie par 3 la valeur de nombre
}

*/