#include <stdio.h>
#include <stdlib.h>


int suma_elementow(int ** tab, int n, int m)
{
    int suma = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            suma += tab[i][j];
        }
    }
    return suma;
}

int main()
{
    int n = 2, m = 2;
    int ** tab= malloc(2*sizeof(int*));
    tab[0] =  malloc(2*sizeof(int));
    tab[1] =  malloc(2*sizeof(int));
    tab[2] =  malloc(2*sizeof(int));
    tab[0][0] = 3;
    tab[0][1] = -2;
    tab[1][0] = 11;
    tab[1][1] = 4;
    int result = suma_elementow(tab, n, m);
    printf("%d", result);
    for(int i=0;i<n;i++)
    {
        free(tab[i]);
    }
    free(tab);
    return 0;
}

