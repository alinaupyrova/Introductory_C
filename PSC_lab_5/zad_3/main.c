#include <stdio.h>
#include <stdlib.h>

int foo(int n)
{
    if(n==0 || n==1)
    {
        return 1;
    }
    if(n % 3 == 0)
    {
       return foo(n/3);
    }
    if(n % 3 == 1)
    {
         return foo(n-1)+1;
    }
    if (n % 3 == 2)
    {
         return foo(n-1)-1;
    }
}
int main()
{
   printf("%d\n", foo(0));
   printf("%d\n", foo(4));
   printf("%d\n", foo(4));
   printf("%d\n", foo(3));
   printf("%d\n", foo(8));
   printf("%d\n", foo(34));
   return 0;
}
