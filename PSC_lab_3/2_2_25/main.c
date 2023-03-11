#include <stdio.h>
#include <stdlib.h>

int function(unsigned int n){
    if(n == 0){
        return 1;
    }
    else if(n == 1){
        return 1;
    }
    else{
        if(n % 2 == 0){
        return function(n-1)+n;
        }
        else if(n % 2 != 0){
        return function(n-1)*n;
        }
    }

}
int main()
{
   unsigned int n = 3;
   int result = function(n);
   printf("The number under index %d is %d",n, result);
}
