#include <stdio.h>
#include <stdlib.h>
#include<math.h>
int main()

{   int w;
    double wysota;
    double podstawa;
    double s;
    double p;
    double bok_1,bok_2, bok_3;
    printf("Wpisz 1, jezeli chcesz podac wysokosc i podstawe \n");
    printf("Wpisz 2, jezeli chcesz podac dlugosc 3 bokow \n");
    scanf("%d", &w);
    if(w == 1){
        printf("Wysokosc trojkanta jest rowna ");
        scanf("%f", &wysota);
        printf("Podstawa trojkanta jest rowna ");
        scanf("%f", &podstawa);
        s = podstawa*wysota/2;
    }
    else{
        printf("Dlugosc pierszego boku jest rowny ");
        scanf("%lf", &bok_1);
        printf("Dlugosc drugiego boku jest rowny ");
        scanf("%lf", &bok_2);
        printf("Dlugosc trzeciego boku jest rowny ");
        scanf("%lf", &bok_3);
        p  = (bok_1 + bok_2 + bok_3) / 2;
        s = sqrt(p*(p-bok_1) *(p-bok_2) * (p-bok_3));

    }
      printf("Pole trojkonta jest rowne %lf", s);
    return 0;
}
