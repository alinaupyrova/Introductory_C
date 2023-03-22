
#include <stdio.h>
#include <stdlib.h>
int foo( const int (*p_1)(int), int * const(p_2)(int), unsigned int n) {
    int roznica = p_1(n)- p_2(n);
    return roznica;

}
int pom_1(int x)
{
    return  x+2;
}
int pom_2(int x)
{
    return (x+2)%10;
}
int main()
{
    printf("Roznica jest rowna %d\n",foo(pom_1, pom_2, 3));
    printf("Roznica jest rowna %d\n",foo(pom_1, pom_2, 6));
    return 0;
}
