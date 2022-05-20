#include <stdio.h>
/*
main function 
*/
int main(){
    double ph = 7.0;

    // Start the if, else if, else here:
    if(ph>7){
    printf("Basic");
    }else if(ph<7){
    printf("Acidic");
    }else {
    printf("Neutral");
    }      
        
    int a = 10;
    int b = 5;
    int min;

    // Print out the smaller number with return
    min = a < b ? a : b;
    printf("%d\n", min);

    // Print out the smaller number without return
    a < b ? printf("%d\n", a) : printf("%d\n", b);

    int number = 7;

  switch(number) {
    case 1:
      printf("Bulbasaur\n");
      break;
    case 2:
      printf("Ivysaur\n");
      break;
    case 3:
      printf("Venusaur\n");
      break;
    case 4:
      printf("Charmander\n");
      break;
    case 5:
      printf("Charmeleon\n");
      break;
    case 6:
      printf("Charizard\n");
      break;
    case 7:
      printf("Squirtle\n");
      break;
    case 8:
      printf("Wartortle\n");
      break; 
    case 9:
      printf("Blastoise\n");
      break; 
    default:
      printf("Unknown\n");
      break;
  }
}