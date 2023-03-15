#include <stdio.h>
#include <stdlib.h>


int sum(int const *a, int const *b){
  int temp = *a + *b;
  return temp;
}
int main()
{
    const int a = 3;
    const int b = 7;
    printf("Sum is %d", sum(&a, &b));
}
