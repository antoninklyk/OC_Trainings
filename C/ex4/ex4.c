#include <stdio.h>
#include <stdlib.h>

int triple(int x){
    return x*3;
}

int main(int argc, char* args[]){

    int input = 0;
    printf("saisissez input:\n");
    scanf("%d", &input);

    printf("output: %d\n", triple(input));
    return 0;
}