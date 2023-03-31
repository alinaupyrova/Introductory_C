#include <stdio.h>
#include <stdlib.h>
int foo(const int *p_1, int *const p_2) {
    int roznica = *p_1 - *p_2;
    return roznica;

}
int main()
{
    int x = 5;
    int y = 4;
    const int *p_1 = &x;
    const int *p_2 = &y;
    printf("Roznica jest rowna %d\n",foo(p_1, p_2));
    return 0;
}
