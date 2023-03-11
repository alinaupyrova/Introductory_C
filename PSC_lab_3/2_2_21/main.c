#include <stdio.h>
#include <stdlib.h>

int function(unsigned int n){
    if(n == 0)
        return 1;
    else
        return  2 * function(n-1)+5;
}
int main()
{
    unsigned int n = 4;
   int result = function(n);
   printf("The number under index %d is %d",n, result);
}
