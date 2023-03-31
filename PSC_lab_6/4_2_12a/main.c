#include <stdio.h>
#include <stdlib.h>

void function(int n, int *tab)
{
    int temp;
    for(int i = 0; i < n/2; i++)
    {
       temp = tab[i];
        tab[i] = tab[n - 1 - i];
        tab[n - 1 - i] = temp; 
    }
}
int main()
{
    int n = 4;
    int tab[] = {1,5,6,7};
    function(n, tab);
    for(int i = 0; i < n; i++)
    {
        printf("%d\n", *(tab+i));
    }
    return 0;
}

