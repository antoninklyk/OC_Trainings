#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{ 
  int choixMenu = 0;

  printf(("=== Menu ===\n1. Royal Cheese\n2. Mc Deluxe\n3. Mc Bacon\n4. Big Mac\nVotre choix\n"));

  scanf("%d", &choixMenu);

  switch(choixMenu){

    case 1:
      printf("tu as choisi le menu Royal Cheese\n");
      break;

    case 2:
      printf("tu as choisi le menu Mc Deluxe\n");
      break;

    case 3:
      printf("tu as choisi le menu Mc Bacon\n");
      break;

    case 4:
      printf("tu as choisi le menu Big Mac\n");
      break;

    default:
      printf("dsl aucun menu ne correspond\n");
      break;

  }
  return 0;
}