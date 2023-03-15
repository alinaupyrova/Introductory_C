#include <stdio.h>
#include <stdlib.h>

double *foo(){
 return malloc(sizeof(double));
}
int main()
{
    double *a = foo();
    printf("%p \n",a);
    return 0;
}
