#include <stdio.h>
#include <stdlib.h>

void sklej(char *nap1, char *nap2, char *nap3){
int i, j;
for(i = 0; nap1[i] != 0; i++){
    nap3[i] = nap1[i];
}
for(j = 0; nap2[j] != 0; i++,j++){
    nap3[i] = nap2[j];
}
}
int main()
{
    char nap1[] = "Ala m";
    char nap2[] = "a kota";
    char nap3[20];
    printf("%s\n", nap1);
    printf("%s\n", nap2);
    sklej(nap1, nap2, nap3);
    printf("%s\n", nap3);
    return 0;
}
