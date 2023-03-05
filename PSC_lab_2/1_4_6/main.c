#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    int result = 1;
    printf("Please, enter the number n > 2, n = ");
    scanf("%d", &n);
    if(n <= 2){
        printf("Error, please, try again : ");
        scanf("%d", &n);
    }
    for(int i = 1;  i <= n; i++){
        if(i % 2 == 0){
           result *= i;
        }
    }
    printf("The result is %d", result);
}
