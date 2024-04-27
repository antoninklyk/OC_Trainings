#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* on veut créer une fonction type strlen() qui prend une chaaine de caractère et renvoie un int correspondant aux nombre de caractères à l'intérieur*/

int return_length(const char chaine[]);

int main(int argc, char* args[])
{
    char exchaine[] = "";

    printf("Quelle est votre chaine ?\n");
    scanf("%s", exchaine);

    printf("%d\n", return_length(exchaine));

    return 0;
}

int return_length(const char chaine[]){

    int nb =0;
    char carac_actuel = chaine[nb];//un seul char pas besoin de mettre tab de char pour un seul char

    
    do{
        carac_actuel = chaine[nb+1];
        nb++;
    }while (carac_actuel != '\0');

    // pour compter le \0
    return nb;
}