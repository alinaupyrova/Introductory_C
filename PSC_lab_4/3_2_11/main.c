#include <stdio.h>
#include <stdlib.h>

int *foo11(int n){
 return malloc(n*sizeof(int));
}
int main()
{
   int * imp = foo11(3);
    printf("%p\n", imp);
    printf("%Iu\n", sizeof(imp));
    return 0;
}
