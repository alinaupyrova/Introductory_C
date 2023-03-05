#include <stdio.h>

int main()
{
  char act;
  double number_1, number_2, result;

  printf("Please enter the action in the calculator (+, -, *, /): ");
  scanf(" %c", &act);

  printf("Please enter the first number: ");
  scanf("%lf", &number_1);

  printf("Please enter the second number: ");
  scanf("%lf", &number_2);

  if(act == '+')
  {
    result = number_1 + number_2;
    printf("%lf + %lf = %lf", number_1, number_2, result);
  }
  else if(act == '-')
  {
    result = number_1 - number_2;
    printf("%.2lf - %.2lf = %.2lf", number_1, number_2, result);
  }
  else if(act == '*')
  {
    result = number_1 * number_2;
    printf("%.2lf * %.2lf = %.2lf", number_1, number_2, result);
  }
  else if(act == '/')
  {
    if(number_2 == 0) {
      printf("Error: division by zero");
    } else {
      result = number_1 / number_2;
      printf("%.2lf / %.2lf = %.2lf", number_1, number_2, result);
    }
  }
  else
  {
    printf("Error: invalid operator");
  }

  return 0;
}
