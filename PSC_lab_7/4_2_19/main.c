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
}
return tab2;
}
int main()
{
    int n = 7;
    int tab1[] = {1,4,0,5,67,8,0};
    int* tab2 = copyNonZeroElemnts(n,tab1);
    if (tab2 == NULL) {
        return 1;
    }

    int non_zero_count = 0;
    for (int i = 0; i < n; i++) {
        if (tab1[i] != 0) {
            non_zero_count++;
        }
    }
    for (int i = 0; i < non_zero_count; i++) {
        printf("%d ", tab2[i]);
    }
    return 0;
}
