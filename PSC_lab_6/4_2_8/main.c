#include <stdio.h>
#include <stdlib.h>


void function(int n, int *tab1, int *tab2, double *tab3)
{
  for(int i = 0; i < n; i++)
  {
      tab3[i] = (double)tab1[i];
  }
   for (int i = 0; i < n; i++)
    {
        tab3[n+ i] = (double)tab2[i];
    }
}
int main()
{   int n = 3;
    int tab1[] = {1,2,3};
    int tab2[] = {2,5,8};
    double tab3[2*n];
    function(n, tab1, tab2, tab3);
    for(int i = 0; i < 2 * n; i++)
    {
        printf("%lf\n", *(tab3+i));
    }
    return 0;
}
