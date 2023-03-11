#include <stdio.h>
#include <stdlib.h>


void firstPart(int n){
    int counter = 0;
    for(int a = 1; a *a < n; a++){
        for(int b = 1; b * b < n;b++){
            if(a*a + b*b == n){
                if(a == b){
                    printf("%d^2 + %d^2 = %d \n", a, b, n);
                }
                 printf("%d^2 + %d^2 = %d \n", a, b, n);
                 counter++;
            }
        }
    }
    if (counter == 0){
        printf("The number n cannot be decomposed into the sum of a and b!\n");
    }


}
void secondPart(int n){
    int counter = 0;
     for(int a = 1; a*a < n; a++) {
        for(int b = 1; b <= a; b++) {
            if(a*a + b*b == n) {
                printf("%d^2 + %d^2 = %d\n", a,b,n);
                counter++;
            }
        }
    }
    if (counter == 0){
        printf("The number n cannot be decomposed into the sum of a and b!");
    }

}

int main()
{
   int n;
   printf("Please, enter the positive number, n = ");
   scanf("%d", &n);
   while (n < 0){
     printf("Please, enter the positive number again, n = ");
     scanf("%d", &n);
   }
   printf("The first part of the task :\n");
   firstPart(n);
   printf("The second part of the task :\n");
   secondPart(n);
   return 0;
}
