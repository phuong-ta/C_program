#include <stdio.h>

int main() {
  
  int booksSold = 100;
  double bookCost = 9.99;
  double totalSalesValue;

  booksSold+=200;
  totalSalesValue=booksSold*bookCost;
  totalSalesValue/=2;

  printf("You sold %d books and your take home was $%.2f\n", booksSold, totalSalesValue);

  int x = 5;
  int y = 42;

  if (x  <y) {
  printf("Congratulations on setting up a comparison correctly!");
  }

}