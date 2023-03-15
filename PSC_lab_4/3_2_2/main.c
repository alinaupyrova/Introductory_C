#include <stdio.h>
#include <stdlib.h>

int* foo(int * a, int *b)
{
    if (*a < *b)
        return a;
    return b;
}

int main()
{
    int x = 4, y =1;
    printf("adres x %p\n", &x);
    printf("adres y %p\n", &y);
    printf("Result is %p\n", foo(&x,&y));
    return 0;
}
