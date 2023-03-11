#include <stdio.h>
#include <stdlib.h>

int function(unsigned int n, unsigned int m){
 if(m == 0){
    return n;
 }
 else if (n >= m){
    return n - m + function(n-1,m)+function(n,m-1);
 }
 else{
    return function(m,n);
 }

}
int main()
{
   unsigned int n = 2;
   unsigned int m = 3;
   int result = function(n,m);
   printf("The result of n = %d and m = %d is %d", n,m,result);

}
