#include <stdio.h>
#include <stdlib.h>

int main()
{
   double a,b,c,d;
   int x = 0;
   printf("Please, enter the number, a = ");
   scanf("%lf", &a);
   printf("Please, enter the number, b = ");
   scanf("%lf", &b);
   printf("Please, enter the number, c = ");
   scanf("%lf", &c);
   printf("Please, enter the number, d = ");
   scanf("%lf", &d);
   while (abs(a)*x*x + b*x + c < d) {
        x++;
    }
   printf("Smallest positive x for |a|*x^2 + b*x + c > d: %d\n", x);

   x = 0;

   while (5*x*x + a*x + b < c) {
        x++;
    }
    printf("Largest positive x for 5*x^2 + a*x + b < c: %d\n", x);

   x = 0;

    while (5*x*x + a*x + b <= c) {
        x++;
    }
    printf("Largest positive x for 5*x^2 + a*x + b <= c: %d\n", x);


}
