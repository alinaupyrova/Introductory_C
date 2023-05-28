#include <stdio.h>
#include <stdlib.h>

struct element
{
    int i;
    struct element *next;
};

int najwiekszaRoznicaZG(struct element *lista)
{
    struct element *wsk1 = lista->next;
    int maxRoznica = 0;
    int zainicjalizowana = 0;  // Zmieniona nazwa zmiennej

    while (wsk1 != NULL)
    {
        struct element *wsk2 = wsk1->next;
        while (wsk2 != NULL)
        {
            int roznica = abs(wsk1->i - wsk2->i);
            if (!zainicjalizowana || roznica > maxRoznica)
            {
                maxRoznica = roznica;
                zainicjalizowana = 1;
            }
            wsk2 = wsk2->next;
        }
        wsk1 = wsk1->next;
    }

    return maxRoznica;
}
int najwiekszaRoznicaBG(struct element *lista)
{
    struct element *wsk = lista;
    int maxRoznica = 0;

    while (wsk->next != NULL)
    {
        int roznica = abs(wsk->next->i - wsk->i);
        if (roznica > maxRoznica)
        {
            maxRoznica = roznica;
        }
        wsk = wsk->next;
    }

    return maxRoznica;
}

int main()
{
    struct element *lista = malloc(sizeof(struct element));
    lista->next = malloc(sizeof(struct element));
    lista->next->i = 9;
    lista->next->next = malloc(sizeof(struct element));
    lista->next->next->i = -8;
    lista->next->next->next = malloc(sizeof(struct element));
    lista->next->next->next->i = 7;
    lista->next->next->next->next = malloc(sizeof(struct element));
    lista->next->next->next->next->i = -28;
    lista->next->next->next->next->next = NULL;

    int maxRoznicaZG = najwiekszaRoznicaZG(lista);
    printf("Najwieksza roznica dla listy z glowa wynosi  %d\n", maxRoznicaZG);

    struct element * lista2 = malloc(sizeof(struct element));
    lista2->i = 5;
    lista2->next = malloc(sizeof(struct element));
    lista2->next->i = 8;
    lista2->next->next = malloc(sizeof(struct element));
    lista2->next->next->i = 3;
    lista2->next->next->next = malloc(sizeof(struct element));
    lista2->next->next->next->i = 2;
    lista2->next->next->next->next = NULL;

    int maxRoznicaBG = najwiekszaRoznicaBG(lista2);
    printf("Najwieksza roznica dla listy bez glowy wynosi  %d\n", maxRoznicaBG);

    return 0;
}
