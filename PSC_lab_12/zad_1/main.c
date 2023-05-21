#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct Ksiazka
{
    char tytul[50];
    int liczba_stron;
};
struct Ksiazka* initKsiazka(char t[50],int l_st)
{
  if(strlen(t) < 5 && l_st<= 50)
  {
      return NULL;
  }
  struct Ksiazka *my_ksiazka = malloc(sizeof(struct Ksiazka));
  strcpy(my_ksiazka -> tytul, t);
  my_ksiazka -> liczba_stron = l_st;
  return my_ksiazka;
}
void pokazKsiazka(struct Ksiazka *k)
{
    printf("Title : %s\n", k -> tytul);
    printf("Number of pages : %d\n", k -> liczba_stron);

}
void dodajStrony(struct Ksiazka * k)
{
    k-> liczba_stron+= 10;
}
int main()
{
    struct Ksiazka *first_book = initKsiazka("Podstawy matematyki",250);
    pokazKsiazka(first_book);
    dodajStrony(first_book);
    pokazKsiazka(first_book);
    return 0;
}
