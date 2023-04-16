#include <stdio.h>
#include <stdlib.h>

void foo7(int n, int tab1[], int tab2[], int tab3[])
{
   int temp = 0;
   for( int i = 0; i < n; i++)
   {
       if ( tab1[i] > tab2[i])
       {
           temp = tab1[i];
           tab3[i] = temp;
       }
       if (tab2[i] > tab1[i])
        {
            temp = tab2[i];
            tab3[i] = temp;
        }
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
    int tab1[] = {1,-5,0,4};
    int tab2[] = {2,-8,6,1};
    int tab3[] = {};
    foo7(4, tab1, tab2, tab3);
    print_tab3(4,tab3);
    return 0;
}
