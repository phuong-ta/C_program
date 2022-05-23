#include <stdio.h>

int main() {
  
  int numOfBooks =10;
  char favLetter ='a';
  char favDigit = '7';
  double costOfCandyBar=7.50;

  printf("Number of books: %d\n", numOfBooks);
  printf("Your Favorite Letter is: %c\n", favLetter);
  printf("Your Favorite Digit is: %c\n", favDigit);
  printf("You expect to pay $%.2f for a candy bar.\n", costOfCandyBar);

  char targetChar;
  int sourceInt = 99;
  double sourceDouble = 55.67;

  // Cast here
  targetChar= (char)sourceInt ;
  targetChar= sourceDouble;
  printf("source int %d, source double, %.2f, target %c\n", sourceInt, sourceDouble, targetChar);  

    // const: can not change value of variable
  const double SPEEDOFLIGHT = 1.86;
  int timeTraveledInSeconds = 30;
  printf("Light would travel %.2f miles in %d seconds\n", SPEEDOFLIGHT * 100000 * timeTraveledInSeconds, timeTraveledInSeconds);


}