#include <stdio.h>
#include <stdlib.h>

void prompt(){
  int quarters = 0, dimes = 0, nickels = 0, pennies = 0;
 
  printf("\nInput # of quarters: ");
  scanf("%d", &quarters);
  printf("\nInput # of dimes: ");
  scanf("%d", &dimes);
  printf("\nInput # of nickels: ");
  scanf("%d", &nickels);
  printf("\nInput # of pennies: ");
  scanf("%d", &pennies);

}

int main(){
  prompt();

  return 0;
}


