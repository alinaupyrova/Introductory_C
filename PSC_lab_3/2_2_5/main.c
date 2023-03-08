#include <stdio.h>
#include <stdlib.h>

double power(int n){
   double temp = 1;
   if(n > 0){
    for(int i = 1; i <=n; i++){
    temp*= 2;
    }
   }
   else if (n < 0){
    for(int i = -1; i >=n; i--){
    temp/= 2;
    }
   }
   return temp;
}
int main()
{
    int n;
    printf("Please, enter the number n, n = ");
    scanf("%d",&n);
    printf("2 in power : %d is %lf",n, power(n));

}
