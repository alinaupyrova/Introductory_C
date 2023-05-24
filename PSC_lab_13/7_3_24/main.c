#include <stdio.h>
#include <stdlib.h>
struct element
{
    int i;
    struct element * next;
};
int sumaBG(struct element * lista)
{
    int suma = 0;
    while(lista != NULL)
    {
        suma += lista-> i;
        lista = lista -> next;
    }
    return suma;
}
int sumaZG(struct element * lista)
{
    int suma = 0;
    while(lista -> next == NULL)
    {
        suma += lista;
        lista = lista -> next;
    }
    return suma;
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

    wyswietkListeZGlowa(lista1);
    printf("%d\n", sumaZG(lista1));

    wyswietlBG(lista2);
    printf("%d\n", sumaBG(lista2));
    return 0;
}
