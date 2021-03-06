/**
 * Author: Luke Olson
 * Date:   08/31/2020
 *
 * This program computes income taxes based on adjusted
 * gross income and a child tax credit.
 *
 */
#include <stdlib.h>
#include <stdio.h>
 int main(int argc, char **argv) {

  double agi = 0.0;
  char c = 'N';
  double tax = 0.0;
  double childCredit = 0.0;
  double totalTax = 0.0;
  int numChildren = 0;

  printf("Please enter your adjusted gross income (AGI): ");
  scanf("%lf", &agi);
  //remove the "enter" endline character
  getchar();

  printf("Do you have any children? (Y) or (N)? ");
  c = getchar();

  if(c == 'y' || c == 'Y')
  {
    printf("How many children do you have? ");
    scanf("%d", &numChildren);

    childCredit = numChildren * 1000;
  }

  if (0 < agi && agi <= 17000)
  {
    tax = 0.10 * agi;
  }
  else if (17000 < agi && agi  <= 69000)
  {
    tax = 1700 + (0.15 * (agi - 17000));
  }
  else if (69000 < agi && agi  <= 139350)
  {
    tax = 9500 + (0.25 * (agi - 69000));
  }
  else if (139350 < agi && agi <= 212300)
  {
    tax = 27087.5 + (0.28 * (agi - 139350));
  }
  else if (212300 < agi && agi <= 379150)
  {
    tax = 47513.50 + (0.33 * (agi - 212300));
  }
  else
  {
    tax = 102574 + (0.35 * (agi - 379150));
  }

  totalTax = tax - childCredit;
  if (totalTax < 0)
  {
    totalTax = 0;
  }


  printf("AGI:          $%10.2f\n", agi);
  printf("Tax:          $%10.2f\n", tax);
  printf("Child Credit: $%10.2f\n", childCredit);
  printf("Total Tax:    $%10.2f\n", totalTax);

  return 0;
}
