#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int a = 0;
    int b = 0;

    scanf("%d\n", &a);
    scanf("%d\n", &b);

    int resultat = a + b;

    printf("le resultat est %d\n", resultat);
    return 0;
}