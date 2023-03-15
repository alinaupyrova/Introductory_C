#include <stdio.h>
#include <stdlib.h>

void change(int *x, int *y){
    int temp = *x;
    if( *y < *x){
        *x = *y;
        *y = temp;
    }
}
int main()
{
   int x = 4,y = 2;
   printf("x = %d, y = %d\n",x,y);
   change(&x,&y);
     printf("x = %d, y = %d\n",x,y);
    return 0;
}
