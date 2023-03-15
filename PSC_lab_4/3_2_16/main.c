#include <stdio.h>
#include <stdlib.h>
void foo16(int const * a, int * const b){
 *b = *a;
}
int main()
{
    int const a = 3;
    int const b = 9;
    printf("a = %d, b = %d\n", a, b);
    foo16(&a,&b);
    printf("a = %d, b = %d\n", a, b);
    return 0;
}

