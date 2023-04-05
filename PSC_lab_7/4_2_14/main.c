#include <stdio.h>
#include <stdlib.h>

double* foo1(int n)
{
    return (double*)malloc(n*sizeof(double));
}
int main()
{
    printf("%p\n",foo1(1));
    return 0;
}
