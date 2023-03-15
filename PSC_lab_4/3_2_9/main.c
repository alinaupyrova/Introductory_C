#include <stdio.h>
#include <stdlib.h>

int foo(){
    int *a;
   return (sizeof(*a));
}
int main()
{
    int a = 4;
    printf(" a = %d", foo(&a));
    return 0;
}
