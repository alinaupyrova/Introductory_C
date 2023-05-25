#include <stdio.h>
#include <stdlib.h>

struct element
{
    int i;
    struct element *next;
};

struct element *zlozListy(struct element *lista1, struct element *lista2)
{
    struct element *nowaLista = NULL;
    struct element *tail = NULL;

    while (lista1 != NULL && lista2 != NULL)
    {
        struct element *nowyElement1 = malloc(sizeof(struct element));
        nowyElement1->i = lista1->i;
        nowyElement1->next = NULL;

        if (nowaLista == NULL)
        {
            nowaLista = nowyElement1;
            tail = nowyElement1;
        }
        else
        {
            tail->next = nowyElement1;
            tail = nowyElement1;
        }

        struct element *nowyElement2 = malloc(sizeof(struct element));
        nowyElement2->i = lista2->i;
        nowyElement2->next = NULL;

        tail->next = nowyElement2;
        tail = nowyElement2;

        lista1 = lista1->next;
        lista2 = lista2->next;
    }

    return nowaLista;
}

void wyswietlListe(struct element *lista)
{
    struct element *wsk = lista;
    while (wsk != NULL)
    {
        printf("%d\n", wsk->i);
        wsk = wsk->next;
    }
}

int main()
{
    struct element *lista1 = malloc(sizeof(struct element));
    lista1->i = 1;
    lista1->next = malloc(sizeof(struct element));
    lista1->next->i = 3;
    lista1->next->next = malloc(sizeof(struct element));
    lista1->next->next->i = 5;
    lista1->next->next->next = NULL;

    struct element *lista2 = malloc(sizeof(struct element));
    lista2->i = 2;
    lista2->next = malloc(sizeof(struct element));
    lista2->next->i = 4;
    lista2->next->next = malloc(sizeof(struct element));
    lista2->next->next->i = 6;
    lista2->next->next->next = NULL;

    struct element *nowaLista = zlozListy(lista1, lista2);

    wyswietlListe(nowaLista);

    return 0;
}
