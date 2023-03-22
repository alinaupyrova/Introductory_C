#include <stdio.h>
#include <stdlib.h>

int foo(int(*p_1)(int),int(*p_2)(int), int n)
{
    int sum = p_1(n)+p_2(n);
    return sum;

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
    printf("Sum is %d\n",foo(pom_1, pom_2, 3));
    printf("Sum is %d\n",foo(pom_1, pom_2, 6));
    return 0;
}
