#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* args[]){

    int nb = 1;
    int nbIterations = 0;

    printf("selectionne le nombre d'iterations :\n");
    scanf("%d", &nbIterations);


    while(nb < nbIterations+1){
        
        printf("%d\t", nb);
        printf("Antonin est un futur codeur pro !\n");
        nb++;

    }


    return 0;
}