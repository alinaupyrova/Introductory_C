#include <stdio.h>
#include <stdlib.h>


int absoluteValueOfNumber(int n){
    if(n < 0){
        return n*(-1);
    }
    else{
        return n;
    }
}
int main()
{
    int n;
    printf("Please, enter the number n, n = ");
    scanf("%d",&n);
    printf("The absolute value of number is %d", absoluteValueOfNumber(n));
    return 0;
}
