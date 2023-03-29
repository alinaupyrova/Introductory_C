#include <stdio.h>
#include <stdlib.h>


int foo7(int n, int tab1[], int tab2[], int tab3[])
{
    int sum = 0;
    for(int i = 0; i < n; i++)
    {
        sum = tab1[i] + tab2[i];
        tab3[i] = sum;
    }
}
void print_tab3(int n, int tab3[])
{
    for(int i=0;i<n;i++)
    {
        printf("[%d]=%d\n",i, tab3[i]);
    }
}
int main()
{
    int tab1[] = {1,2,0,4};
    int tab2[] = {2,5,6,-1};
    int tab3[] = {};
    foo7(4, tab1, tab2, tab3);
    print_tab3(4,tab3);
    return 0;
}
