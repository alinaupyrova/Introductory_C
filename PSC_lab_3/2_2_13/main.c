#include <stdio.h>
#include <stdlib.h>

void squareOfNumber(int n){
int a = 0, b = 0;
for(int i = 0; i <= sqrt(n); i++){
    if (a*a + b*b == n){
        printf("%d*%d + %d*%d = %d\n", a,a,b,b,n);
    }
  }
}

int main()
{
   unsigned int n;
   printf("%d", squareOfNumber(n));
   return 0;
}
