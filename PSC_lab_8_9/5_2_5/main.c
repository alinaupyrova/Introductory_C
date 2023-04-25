#include <stdio.h>
#include <stdlib.h>


void przepisz1(char* tab1, char* tab2){
 int i  =0;
 for( i = 0; tab1[i] != 0; i++){
        tab2[i] = tab1[i];
 }
 tab2[i] = '\0';
}
int main()
{
    char tab1[] = "abc";
    char tab2[] = "def";
     printf("Elementy pierwszej tablicy : %s\n", tab1);
   printf("Elementy drugiej tablicy : %s\n", tab2);
    przepisz1(tab1, tab2);
     printf("Elementy pierwszej tablicy : %s\n", tab1);
    printf("Elementy drugiej tablicy :%s\n", tab2);
    return 0;
}
