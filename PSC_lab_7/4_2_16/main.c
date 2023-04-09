#include <stdio.h>
#include <stdlib.h>

void foo(double* tablica) {
    if(tab != NULL){
         free(tab);
    }
    else{
         printf("Array is empty");
    }
}

int main() {
    double* tablica = (double*) malloc(sizeof(double));
    foo(tablica);
    return 0;
}
