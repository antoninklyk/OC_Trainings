/* Dans ce quiz, vous allez construire au fur et à mesure des questions un jeu regroupant ce que vous avez pu apprendre lors de cette première partie. Il s'agit d'un petit jeu que j'appelle "Plus ou moins" ; le principe est le suivant :

    L'ordinateur tire au sort un nombre entre 1 et 100.
    Il vous demande de deviner le nombre. Vous entrez donc un nombre entre 1 et 100.
    L'ordinateur compare le nombre que vous avez entré avec le nombre « mystère » qu'il a tiré au sort. Il vous dit si le nombre mystère est supérieur ou inférieur à celui que vous avez entré.
    Puis l'ordinateur vous redemande le nombre.
    … Et il vous indique si le nombre mystère est supérieur ou inférieur.
    Et ainsi de suite, jusqu'à ce que vous trouviez le nombre mystère.

Le but du jeu, bien sûr, est de trouver le nombre mystère en un minimum de coups. Allez c'est parti !*/

#include <stdio.h>
#include <stdlib.h>

int genererNombreAleatoire();

int main(int argc, char* args[]){

    int nb_random = genererNombreAleatoire();
    int nb_user = 0;


    while(nb_user != nb_random){

    printf("Quelle est votre reponse ?\n");
    scanf("%d", &nb_user);

        if( nb_user <= 100 && nb_user >=0)
        {
            if(nb_user > nb_random){

                printf("inferieur\n");

            }else if(nb_user < nb_random)
            {
                printf("superieur\n");

            }else if (nb_user == nb_random)
            {
                printf("Gagne!!!");
                printf("le nb mystere etait : %d\n", nb_random);
            }

        }else{

            printf("veuillez selectionner un nb compris entre 0 et 100.\n");

        }
    }

    return 0;
}

int genererNombreAleatoire() {
    return rand() % 101; // % 101 assure que le nombre généré est entre 0 et 100 inclusivement
}