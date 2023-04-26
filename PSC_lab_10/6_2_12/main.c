#include <stdio.h>
#include <stdlib.h>
int suma_elementow(int **tab,int n, int m)
{
    int suma = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < 3; j++)
        {
            suma += tab[i][j];
        }
    }
    return 0;
}
int main()
{   int n = 2;
    int m = 3;
    int tab[2][3] = {{1,2,3}, {3,2,1}};
    int result = suma_elementow(tab,n,m);
    printf("%p\n",result);
    return 0;
}
