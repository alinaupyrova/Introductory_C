#include <stdio.h>
#include <stdlib.h>


int foo7(int n, int tab1[], int tab2[], int tab3[])
{
   for(int i = 0; i < n; i++)
   {

       tab2[i] = tab1[i];
       tab1[i] = tab3[i];
       tab3[i] = tab2[i];
   }
}
void print_tab3(int n, int tab3[])
{
    for(int i=0;i<n;i++)
    {
        printf("[%d]=%d\n",i, tab3[i]);
    }
}
void print_tab1(int n, int tab3[])
{
    for(int i=0;i<n;i++)
    {
        printf("[%d]=%d\n",i, tab3[i]);
    }
}
void print_tab2(int n, int tab3[])
{
    for(int i=0;i<n;i++)
    {
        printf("[%d]=%d\n",i, tab3[i]);
    }
}
int main()
{
    int tab1[] = {1,-5,0,4};
    int tab2[] = {2,-8,6,1};
    int tab3[] = {3, 5, 7 ,3};
    foo7(4, tab1, tab2, tab3);
    print_tab3(4,tab3);
    print_tab2(4,tab2);
    print_tab1(4,tab1);

    return 0;
}
