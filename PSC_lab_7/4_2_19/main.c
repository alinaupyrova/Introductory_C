#include <stdio.h>
#include <stdlib.h>

void* copyNonZeroElemnts(int n, int tab1[]){

int counter = 0;
for(int i = 0; i < n; i++){
    if (tab1[i] != 0){
        counter++;
    }
}
int* tab2 = (int*)malloc(counter*sizeof(int));
if(tab2 == NULL){
    return NULL;
}
int j = 0;
for(int i = 0; i <n; i++){
    if(tab1[i] != 0){
        tab2[j] = tab1[i];
        j++;
    }
return tab2;
}
void printing(int n, int tab1[])
{
    for(int i=0;i<n;i++)
    {
        printf("%lf\n", tab1[i]);
    }
    printf("---\n");
}
int main()
{
    int tab1[] = {1,4,5,67,8};
    int* tab2 = copyNonZeroElemnts(5,tab1);
    return 0;
}
