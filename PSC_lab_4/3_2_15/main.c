#include <stdio.h>
#include <stdlib.h>
void foo(int const * a, int *b){
 int temp = *b;
 *b = *a;
 temp = *a;
}
int main()
{
    int const a = 5;
    int b = 8;
    printf("a = %d, b = %d\n", a, b);
    foo(&a,&b);
    printf("a = %d, b = %d\n", a, b);
    return 0;
}
