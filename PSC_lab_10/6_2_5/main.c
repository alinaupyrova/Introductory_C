#include <stdio.h>
#include <stdlib.h>
int ***alokuj(int n, int m , int k)
{
  int ***temp = (int***)malloc(n*sizeof(int**));
  for(int i = 0; i < n; i++)
    {
    temp[i] = (int**)malloc(m*sizeof(int*));
    for(int j = 0; j < m; j++)
    {
        temp[i][j] =(int*)malloc(k*sizeof(int));
    }

  }
  return temp;
}


int ***alokuj2(int n, int m , int k)
{
  int ***temp = (int***)malloc(n*sizeof(int**));
  for(int i = 0; i < n; i++)
    {
    temp[i] = (int**)malloc(m*sizeof(int*));
    for(int j = 0; j < m; j++)
    {
        temp[i][j] =(int*)malloc(k*sizeof(int));
    }

  }
  return temp;
}

void zwolnij(int *** tab, int n, int m, int k)
{
  for(int i = 0; i < n; i++)
    {
    for(int j =0; j < n; j++)
    {
     free(tab[i][j]);
    }
  free(tab[i]);
  }
  free(tab);
}

int main()
{
  int ***tablica = alokuj(2,3,4);
  printf("%p\n", tablica);
  return 0;

  int ***tablica2= alokuj(-2,3,4);
  printf("%p\n",tablica2);
  zwolnij(tablica2, -2,3,4);
  return 0;
}
