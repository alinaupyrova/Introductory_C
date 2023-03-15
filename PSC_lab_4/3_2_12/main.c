#include <stdio.h>
#include <stdlib.h>

double *foo12(int n){
 return malloc(n*sizeof(int));
}
int main()
{
   double * imp = foo12(3);
    printf("%p\n", imp);
    printf("%Iu\n", sizeof(imp));
    return 0;
}
