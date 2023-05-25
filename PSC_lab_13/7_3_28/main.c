#include <stdio.h>
#include <stdlib.h>

struct element
{
    int i;
    struct element *next;
};

int najwiekszaRoznicaZG(struct element *lista)
{
    struct element *wsk = lista->next;
    int maxRoznica = abs(wsk->i - wsk->next->i);

    while (wsk->next->next != NULL)
    {
        int roznica = abs(wsk->i - wsk->next->i);
        if (roznica > maxRoznica)
        {
            maxRoznica = roznica;
        }
        wsk = wsk->next;
    }

    return maxRoznica;
}

int najwiekszaRoznicaBG(struct element *lista)
{
    struct element *wsk = lista;
    int maxRoznica = abs(wsk->i - wsk->next->i);

    while (wsk->next != NULL)
    {
        int roznica = abs(wsk->i - wsk->next->i);
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
    lista->next->i = 3;
    lista->next->next = malloc(sizeof(struct element));
    lista->next->next->i = -8;
    lista->next->next->next = malloc(sizeof(struct element));
    lista->next->next->next->i = 10;
    lista->next->next->next->next = malloc(sizeof(struct element));
    lista->next->next->next->next->i = -20;
    lista->next->next->next->next->next = NULL;

    int maxRoznicaZG = najwiekszaRoznicaZG(lista);
    printf("Najwieksza roznica dla listy z glowa wynosi  %d\n", maxRoznicaZG);

    struct element * lista2 = malloc(sizeof(struct element));
    lista2->i = 3;
    lista2->next = malloc(sizeof(struct element));
    lista2->next->i = -8;
    lista2->next->next = malloc(sizeof(struct element));
    lista2->next->next->i = 3;
    lista2->next->next->next = malloc(sizeof(struct element));
    lista2->next->next->next->i = 1;
    lista2->next->next->next->next = NULL;

    int maxRoznicaBG = najwiekszaRoznicaBG(lista2);
    printf("Najwieksza roznica dla listy bez glowy wynosi  %d\n", maxRoznicaBG);

    return 0;
}
