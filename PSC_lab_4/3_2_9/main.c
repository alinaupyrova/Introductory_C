#include <stdio.h>
#include <stdlib.h>

int foo(){

   return malloc(sizeof(int));
}
int main()
{
    int a = 4;
    printf("a = %d", foo(&a));
    return 0;
}
