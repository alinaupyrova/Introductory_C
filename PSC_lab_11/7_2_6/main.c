#include <stdio.h>
#include <stdlib.h>
struct punktn
{
    float *tab;
    int ilosc_wymiarow;
};
void przepisz(struct punktn tab1[], struct punktn tab2[], int n)
{
    for(int i = 0; i < n; i++)
    {
       tab2[i].tab = malloc(tab1[i].ilosc_wymiarow*sizeof(float));
       for(int j = 0; j < tab1[i].ilosc_wymiarow; j++)
       {
         tab2[i].tab[j] = tab1[i].tab[j];
       }
    }
}
void wyswietl(struct punktn tab1[], struct punktn tab2[], int n)
{
    for(int i = 0; i < n; i++)
    {
        printf("[%d] = %f, %f, %f\n",i, tab1.tab, tab2.tab);
    }
}
int main()
{
    struct punktn tab1[4] =
    {
       {2,2,3},{1,2,3},{2,6,7}, {2,3,4}
    };
    struct punktn tab2[4] =
    {
       {2,8,9},{3,4,5},{2,3,4},{5,6,7}
    }    ;
    wyswietl(tab1,4);
    wyswietl(tab2,4);
    przepisz(tab1,tab2,4);
    printf("-----------------------------")
    wyswietl(tab1,4);
    wyswietl(tab2,4);
}
