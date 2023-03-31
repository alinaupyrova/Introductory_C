#include <stdio.h>
#include <stdlib.h>

double function(int n, double *tab1, double *tab2)
{
    double result = 0;
    for(int i = 0; i < n; i++)
    {
        result += *(tab1+i) * *(tab2+i);
    }
    return result;
}

int main()
{
    int n = 2;
    double tab1[] = {1.4, 4.5};
    double tab2[] = {3.1, 5.4};
    double result = function(n, tab1, tab2);
    printf("The result is %f\n", result);
    return 0;
}
