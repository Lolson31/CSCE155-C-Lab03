/**
 * Author:
 * Date:
 *
 * This programs provides basic calculator functionality
 * allowing a user to enter two operands and to compute
 * various calculated values.
 *
 */
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main(int argc, char **argv) {

  double a, b, result;
  int choice;

  printf("Enter operand a: ");
  scanf("%lf", &a);

  printf("Enter operand b: ");
  scanf("%lf", &b);

  printf("Enter operation:\n");
  printf("(1) Addition\n");
  printf("(2) Subtraction\n");
  printf("(3) Multiplication\n");
  printf("(4) Division\n");
  printf("(5) Minimum\n");
  printf("(6) Power\n");
  printf("(7) log_a(b)\n");
  scanf("%d", &choice);

  switch(choice) {
    case 1:
      printf("%f", a + b);
      break;

    case 2:
      result = a - b;
      printf("%f", result);
      break;

    case 3:
      result = a * b;
      printf("%f\n", result);
      break;

    case 4:
      if(b == 0)
      {
        printf("please input a valid statement");
      }
      result = a / b;
      printf("%f\n", result);
      break;

    case 5:
      if (a < b)
      {
        result = a;
      }
      else
      {
        result = b;
      }
      printf("%f\n", result);
      break;

    case 6:
      result = pow(a, b);
      printf("%f\n", result);
      break;

    case 7:
      result  = log_a(b);
      printf("%f\n", result);
      break;

    default:
      printf("Please input a valid operator next time");
  }

  return 0;
}
