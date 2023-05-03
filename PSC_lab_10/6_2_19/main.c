#include <stdio.h>
#include <stdlib.h>
void foo(int **tab1, int **tab2, int n, int m)
{
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            tab2[i][j] = tab1[i][j];
        }
    }
}
int main()
{
    int n = 3, m = 2;
    int ** tab= malloc(3*sizeof(int*));
    tab[0] =  malloc(2*sizeof(int));
    tab[1] =  malloc(2*sizeof(int));
    tab[2] =  malloc(2*sizeof(int));
    tab[0][0] = 3;
    tab[0][1] = -2;
    tab[1][0] = 11;
    tab[1][1] = 4;
    tab[2][0] = 6;
    tab[2][1] = -3;
    printf("Elements of first table : \n");
 for(int i  =0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            printf("%d  ", tab[i][j]);
        }
        printf("\n");
    }
    int ** tab2 = malloc(n*sizeof(int*));
    for(int i = 0; i < n; i++)
    {
        tab2[i] = malloc(m*sizeof(int));
    }

    foo(tab,tab2,n,m);
    printf("Elements of second table : \n");
    for(int i  =0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            printf("%d ", tab2[i][j]);
        }
    printf("\n");
    }
    return 0;
}
