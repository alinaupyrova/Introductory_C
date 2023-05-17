#include <stdio.h>
#include <stdlib.h>
union Liczba
{
    int a;
    float b;
};
struct Dane
{
    int tp;
    union Liczba zaw;
};
struct Dane wczytaj()
{
    struct Dane temp;
    printf("Jezeli chcesz podac liczbe calkowita, wpisz 0\n");
    printf("Jezeli chcesz podac liczbe calkowita, wpisz 1\n");
    scanf("%d",&temp.tp);
    if(temp.tp == 0)
    {
        printf("Wpisz liczbe calkowita");
        scanf("%d", &temp.zaw.a);
    }
    else
    {
        printf("Wpisz liczbe calkowita");
        scanf("%d", &temp.zaw.b);
    }
    return temp;
};
void wyswietl(struct Dane arg)
{
    if (arg.tp ==0)
    {
        printf("%d\n", arg.zaw.a);
    }
    else
    {
        printf("%f\n", arg.zaw.b);
    }
}
int main()
{
    union Liczba zm;
    zm.a =5;
    printf("%d\n", zm.a);
    printf("%f\n", zm.b);
    zm.b=3.4;
    printf("%d\n", zm.a);
    printf("%f\n", zm.b);
    struct Dane dane1;
    dane1= wczytaj();
    wyswietl(dane1);
    return 0;
}
