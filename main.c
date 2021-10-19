#include <stdio.h>
#include <stdlib.h>

int main(){
  int quarters = 0, dimes = 0, nickels = 0, pennies = 0;
  double dollar = 0;
 
  printf("\nInput # of quarters: ");
  scanf("%d", &quarters);
  printf("\nInput # of dimes: ");
  scanf("%d", &dimes);
  printf("\nInput # of nickels: ");
  scanf("%d", &nickels);
  printf("\nInput # of pennies: ");
  scanf("%d", &pennies);

  dollar = quarters*0.25 + pennies*0.01 + nickels*0.05 + dimes*0.10;

  printf("\n\nTOTAL: %.2lf Dollars", dollar);

  return 0;
}


