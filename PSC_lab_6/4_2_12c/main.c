#include <stdio.h>
#include <stdlib.h>


void function(int n, int *tab)
{
    int temp = tab[n-1];
    for(int i = n-2; i >= 0; i--)
    {
      tab[i+1] = tab[i];
    }
            tab[0] = temp;

}
int main()
{
    int n = 4;
    int tab[] = {1,5,3,0};
    function(n, tab);
    for(int i = 0; i < n; i++)
    {
        printf("%d\n", *(tab+i));
    }
    return 0;
}
