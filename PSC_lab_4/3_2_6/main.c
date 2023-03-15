#include <stdio.h>
#include <stdlib.h>

void change(int n, int *w){
  *w = n;
}
int main()
{
    int n = 3, w = 7;
    printf("n = %d, w = %d\n",n,w);
    change(n, &w);
    printf("n = %d, w = %d\n",n,w);
    return 0;
}
