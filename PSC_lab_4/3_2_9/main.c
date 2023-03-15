#include <stdio.h>
#include <stdlib.h>

int * foo(){
   return malloc(sizeof(int));
}
int main()
{
    int *a = foo();
    printf("%p\n", a);
    return 0;
}
