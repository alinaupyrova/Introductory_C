#include <stdio.h>
#include <stdlib.h>

int main()
{
  int n;
  int result = 1;
  printf("Please, enter the positive number, n = ");
  scanf("%d", &n);
  if(n < 0){
    printf("Please, enter the positive number again, n = ");
    scanf("%d", &n);
   }
   for(int i = 1; i <= n; i++){
    result *= i;
   }
   printf("The %d! is %d", n, result);
   return 0;
}
