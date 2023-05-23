#include <stdio.h>
#include <stdlib.h>

struct element
{
    int i;
    struct element* next;
};

void dodaj(struct element** Lista, int a)
{
    struct element* nowyElement = (struct element*)malloc(sizeof(struct element));

    nowyElement->i = a;
    nowyElement->next = *Lista;

    *Lista = nowyElement;
}

int main()
{
    struct element* lista = NULL;

    dodaj(&lista, 3);
    dodaj(&lista, 2);
    dodaj(&lista, 1);

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
       return 0;
}
