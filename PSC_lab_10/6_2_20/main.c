#include <stdio.h>
#include <stdlib.h>

void swap(int **tab1, int **tab2, int n, int m)
{
    int temp = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            temp = tab1[i][j];
            tab1[i][j] = tab2[i][j];
            tab2[i][j] = temp;
        }
    }
}

int main()
{
    int n = 2, m = 2;
    int **tab1 = malloc(n*sizeof(int*));
    tab1[0] =  malloc(m*sizeof(int));
    tab1[1] =  malloc(m*sizeof(int));
    tab1[0][0] = 3;
    tab1[0][1] = -2;
    tab1[1][0] = 5;
    tab1[1][1] = 4;

    int **tab2 = malloc(n*sizeof(int*));
    tab2[0] =  malloc(m*sizeof(int));
    tab2[1] =  malloc(m*sizeof(int));
    tab2[0][0] = 7;
    tab2[0][1] = -1;
    tab2[1][0] = 3;
    tab2[1][1] = 1;
    swap(tab1,tab2,n,m);
    printf("Elements of first table : \n");
    for(int i  =0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            printf("%d  ", tab1[i][j]);
        }
        printf("\n");
    }
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
