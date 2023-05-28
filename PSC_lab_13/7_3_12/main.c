#include <stdio.h>
#include <stdlib.h>

struct element
{
    int i;
    struct element* next;
};

struct element* dodaj(struct element* Lista, int a)
{
    struct element* nowyElement = (struct element*)malloc(sizeof(struct element));

    nowyElement->i = a;
    nowyElement->next = Lista;

    return nowyElement;
}

int main()
{
    struct element* lista = NULL;

    lista = dodaj(lista, 3);
    lista = dodaj(lista, 2);
    lista = dodaj(lista, 1);

    struct element* aktualny = lista;

    while (aktualny != NULL)
    {
        printf("%d ", aktualny->i);
        aktualny = aktualny->next;
    }

    aktualny = lista;
    while (aktualny != NULL)
    {
        struct element* temp = aktualny;
        aktualny = aktualny->next;
        free(temp);
    }

    return 0;
}
