#include <stdio.h>
#include <stdlib.h>
typedef struct
{
   float a, b, c;
}trojkat;

float obwod(trojkat arg)
{
    float obwod = arg.a + arg.b + arg.c;
    return obwod;
}
int main()
{
    trojkat tr = {3.2, 2.3, 5.0};
    printf("%f\n", obwod(tr));
    return 0;
}
// lub
struct trojkat
{
   float a, b, c;
};

float obwod(struct trojkat arg)
{
    float obwod = arg.a + arg.b + arg.c;
    return obwod;
}
int main()
{
    struct trojkat tr = {3.2, 2.3, 5.0};
    printf("%f\n", obwod(tr));
    return 0;
}
