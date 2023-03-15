#include <stdio.h>
#include <stdlib.h>
int foo(int *a, int * b){
 if(*a < *b){
    return *a;
 }
 else {
    return *b;
 }
}
int main()
{
   int x = 4, y = 8;
   printf("%d\n",foo(&x,&y));
    return 0;
}
