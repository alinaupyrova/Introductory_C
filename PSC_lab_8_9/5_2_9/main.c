#include <stdio.h>
#include <stdlib.h>
void wytnij(char * a,int n, int m){
int i ;
for (i = n; i <= m; i++){
    char[i] = 0;
}
}
int main()
{
    int n = 2;
    int m = 4;
    char str [] = "abcdABCD";
    printf("%s", str);
    wytnij(str,n,m);
    printf("Result is %s", wytnij);
    return 0;
}
