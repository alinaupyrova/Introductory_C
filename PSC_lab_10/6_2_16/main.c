#include <stdio.h>
#include <stdlib.h>

int foo( int ** tab, int n, int m)
{
    int max_index = 0;
    double max_srednia = 0;
    for (int i = 0; i < n; i++) {
        double srednia = 0;
        for (int j = 0; j < m; j++) {
            srednia += tab[i][j];
        }
        if (srednia > max_srednia) {
            max_srednia = srednia;
            max_index = i;
        }
    }
    return max_index;
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
    tab[1][0] = 1;
    tab[1][1] = -1;
    int result = foo(tab, n, m);
    printf("%d", result);
    for(int i=0;i<n;i++)
    {
        free(tab[i]);
    }
    free(tab);

    return 0;
}


