#include <stdio.h>
#include <stdlib.h>

void vuln_function(char *input) {
    char buffer[10];
    strcpy(buffer, input);
    printf("Buffer: %s\n", buffer);
}

int main(int args, char* argc[]){

    char input[20];
    printf("Entrez une chaîne de caractères : ");
    scanf("%s", input);
    vuln_function(input);

    return 0;
}

/*
Dans ce programme, la fonction vuln_function copie les données d'entrée fournies par l'utilisateur dans un tampon de taille fixe de 10 caractères. 
Cependant, si l'utilisateur entre une chaîne de caractères de plus de 10 caractères, cela provoquera un débordement de tampon.

Un attaquant pourrait exploiter cette vulnérabilité en fournissant une chaîne de caractères suffisamment longue pour dépasser la taille du tampon. 
Par exemple, en entrant une chaîne de 20 caractères, l'attaquant pourrait écraser la mémoire au-delà de la fin du tampon, 
potentiellement écrasant d'autres variables ou en insérant du code malveillant.

Ce code pourrait être exploité de manière malveillante pour exécuter du code arbitraire, 
ce qui pourrait permettre à l'attaquant de prendre le contrôle du programme ou même du système dans lequel il s'exécute. 
Les attaques par buffer overflow sont donc des vulnérabilités sérieuses et doivent être prises au sérieux par les développeurs de logiciels 
lors de la conception et de la programmation des applications.
*/