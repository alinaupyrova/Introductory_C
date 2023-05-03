#include <stdio.h>
#include <stdlib.h>

void foo(int ** tab, int n, int m)
{
    int * temp = tab[n-1];
    for(int i=n-1;i>0;i--)
    {
        tab[i]=tab[i-1];
    }
    tab[0] = temp;
}
int main()
{
    int n = 3 , m =2;
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
printf("Elements of table : \n");
    for(int i  =0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            printf("%d  ", tab[i][j]);
        }
        printf("\n");
    }
    foo(tab, n, m);
    printf("Result : \n");
    for(int i  =0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            printf("%d  ", tab[i][j]);
        }
        printf("\n");
    }
    return 0;
}
