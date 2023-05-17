#include <stdio.h>
#include <stdlib.h>
struct Samochod
{
    char marka[20];
    int przebieg;
};
struct Samochod initSamochod(char mk[20], int pr)
{
    struct Samochod temp;
    int i;
    for(i = 0; mk[i]!=0;mk++)
    {
        temp.marka[i] = mk[i];
    }
    temp.marka[i] = 0;
    temp.przebieg = pr;
    return temp;
}
void pokazSamochod(struct Samochod arg)
{
    printf("Marka: %s , przebieg : %d\n",arg.marka,arg.przebieg);
}
void przebiegService(struct Samochod *wsk)
{
    wsk -> przebieg += 10000;
}
int main()
{
    struct Samochod zmienna = initSamochod("Bmw",13450);
    pokazSamochod(zmienna);
    przebiegService(&zmienna);
    pokazSamochod(zmienna);

    return 0;
}
