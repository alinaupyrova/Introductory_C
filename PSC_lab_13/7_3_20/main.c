#include <stdio.h>
#include <stdlib.h>
struct element
{
    int i;
    struct element * next;
};
void zerujBG(struct element * lista)
{
    struct element *wsk = lista -> next;
    while(lista != NULL)
    {
        lista -> i = 0;
        lista = lista -> next;
    }
}
void zerujZG(struct element * lista)
{
    struct element *wsk = lista;
    while(lista -> next != NULL)
    {
        lista = lista -> next;
        lista -> i = 0;
    }
}
void wyswietkListeZGlowa(struct element * lista)
{
    if (lista -> next == NULL)
    {
        printf("Lista jest pusta\n---\n");
        return;
    }
    struct element * wsk = lista->next;
    while(wsk != NULL)
    {
        printf("%d\n",wsk->i);
        wsk=wsk->next;
    }
    printf("---\n");
}
void wyswietlBG(struct element * lista)
{
     if (lista == NULL)
    {
        printf("Lista jest pusta\n");
        return;
    }
    struct element * wsk = lista;
    while(wsk != NULL)
    {
        printf("%d\n", wsk->i);
        wsk = wsk->next;
    }
    printf("---\n");
}
int main()
{
    struct element * lista1 = malloc(sizeof(struct element));
    lista1->next = malloc(sizeof(struct element));
    lista1->next->i = -2;
    lista1->next->next = malloc(sizeof(struct element));
    lista1->next->next->i = 8;
    lista1->next->next->next = malloc(sizeof(struct element));
    lista1->next->next->next->i = 7;
    lista1->next->next->next->next = NULL;


    struct element * lista2 = malloc(sizeof(struct element));
    lista2->i =3;
    lista2->next = malloc(sizeof(struct element));
    lista2->next->i = -8;
    lista2->next->next = malloc(sizeof(struct element));
    lista2->next->next->i = 11;
    lista2->next->next->next = malloc(sizeof(struct element));
    lista2->next->next->next->i = -22;
    lista2->next->next->next->next = NULL;

    wyswietkListeZGlowa(lista2);
    zerujZG(lista2);
    wyswietkListeZGlowa(lista2);
    wyswietlBG(lista1);
    zerujBG(lista1);
    wyswietlBG(lista1);
    return 0;
}
