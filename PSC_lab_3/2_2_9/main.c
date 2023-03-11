#include <stdio.h>
#include <stdlib.h>

int power(int n, int m){
    int result = 1;
  for(int i = 1; i <=m; i++){
    result*=n;
  }
    return result;
}
int rootOfNumber(int number, int degree){
    int result = 0;
    for(int i =0; i < number; i++){
        if(power(i,degree) <= number )
            result = i;
    }
    return result;
}

int main()
{
   printf("The result is %d\n", rootOfNumber(2,3));
   printf("The result is %d\n", rootOfNumber(3, 5));
   printf("The result is %d\n", rootOfNumber(2,4));

   return 0;
}
