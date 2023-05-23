#include <stdio.h>
#include <stdlib.h>

struct element
{
    int i;
    struct element* next;
};

struct element* usun(struct element* Lista, int a)
{
    struct element* wsk = Lista;
    struct element* poprzedni = NULL;

    if (Lista == NULL)
    {
        return Lista;
    }

    while (wsk != NULL && wsk->i != a)
    {
        poprzedni = wsk;
        wsk = wsk->next;
    }

    if (wsk != NULL)
    {

        if (poprzedni == NULL)
        {
            Lista = wsk->next;
        }
        else
        {
            poprzedni->next = wsk->next;
        }

        free(wsk);
    }

    return Lista;
}

void test()
{
    struct element* lista = (struct element*)malloc(sizeof(struct element));
    lista->i = 1;

    struct element* element2 = (struct element*)malloc(sizeof(struct element));
    element2->i = 2;

    struct element* element3 = (struct element*)malloc(sizeof(struct element));
    element3->i = 3;

    lista->next = element2;
    element2->next = element3;
    element3->next = NULL;

    lista = usun(lista, 2);

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
}

int main()
{
    test();
    return 0;
}
