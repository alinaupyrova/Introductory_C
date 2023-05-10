#include <stdio.h>
#include <stdlib.h>
struct zespolone
{
    double im, re;
};

struct zespolone dodaj(struct zespolone a, struct zespolone b)
{
    struct zespolone c;
    c.re = a.re + b.re;
    c.im = a.im + b.im;
    return c;
};
int main()
{
    struct zespolone a = {1,2};
    struct zespolone b = {3,4};
    struct zespolone c = dodaj(a,b);
    printf("%lf + %lf\n", c.re, c.im);
    return 0;
}
