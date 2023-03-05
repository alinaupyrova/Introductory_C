#include <stdio.h>

int main()
{
   int n, m;
   printf("Please enter the number n: ");
   scanf("%d", &n);
   printf("Please enter the number m: ");
   scanf("%d", &m);

   printf("The first %d multiples of %d are: ", m, n);

   for(int i = 1; i <= m; i++)
   {
      printf("%d ", n * i);
   }
   return 0;
}







