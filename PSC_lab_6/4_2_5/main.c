#include <stdio.h>
#include <stdlib.h>

int is_prime(unsigned int n)
{
    int tab2[n];
    for(int i = 0; i < n; i++)
    {
        tab2[i] = 1;
    }
    tab2[0] = 0;
    tab2[1] = 0;
    for(int i = 2; i < n; i++)
    {
          if(tab2[i] == 1)
          {
              for(int j = 2; j*i < n; j++)
              {
                  tab2[j*i] = 0;
              }
          }
    }

int index = 3;
for(int k = index; k < n; k++)
{
    if(tab2[k] == 1)
    {
        index = k;
    }
}
    return index;
}
int main()
{
    printf("%d\n", is_prime(22));
    return 0;
}
