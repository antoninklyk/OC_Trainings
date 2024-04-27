#include <stdio.h>
#include <stdlib.h>

void ecriture(FILE* file, char chaineAEcrire[100], int* nbr);

int main(int args, char* argc[]){

    FILE* fichier = NULL;

    fichier = fopen("./src/aurevoir.txt","r+");

    

    if(fichier == NULL){
        exit(0);
        }

    char caractereActuel = 0;

    do{
        caractereActuel=fgetc(fichier);
        printf("%c", caractereActuel);
    }while(caractereActuel != EOF);

    int diable = 666;

    ecriture(fichier,"Ca marche du premier coup!", &diable);

    //rename("./src/coucou.txt","./src/aurevoir.txt");

    //fclose(fichier);

    return 0;
}

void ecriture(FILE* file, char chaineAEcrire[100], int* nbr){

    
    //fseek(file, 0, SEEK_END); //placement curseur

    if(fputs(chaineAEcrire, file)==NULL){
        return;
    }

    fseek(file, 0, SEEK_END); //placement curseur


    fprintf(file,"%d\n",*nbr);

}