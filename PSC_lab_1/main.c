#include <stdio.h>
#include <stdlib.h>

int main()
{
   double number;
    printf("Please, enter the number : ");
    scanf("%lf",&number);
    printf("Representation of %lf in scientific notation is %.1e\n ", number, number);
    return 0;
}
