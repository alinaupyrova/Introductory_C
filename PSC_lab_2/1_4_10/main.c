#include <stdio.h>
#include <stdlib.h>

int main()
{
  int number;
  scanf("%d", &number);
  int i;
  for(i=0;i*i<=number;i++){
    printf("Integer part from the sqrt is %d\n", i-1);
  }
    return 0;
}
