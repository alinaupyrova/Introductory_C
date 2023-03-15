#include <stdio.h>
#include <stdlib.h>

void change(int *a, int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
   int x = 4, y = 9;
   printf("x = %d, y = %d \n", x,y);
   change(&x, &y);
    printf("x = %d, y = %d \n", x,y);
   return 0;
}
