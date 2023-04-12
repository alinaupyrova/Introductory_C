#include <stdio.h>
#include <stdlib.h>
#include <wchar.h>


void wyznasc1(char* napis){

napis[0]='\0';
}
void wyznasc2(char* napis){
napis[0] = 0;
}
void wyznasc3(char* napis){

*napis = 0;
}
void wyznasc4(char* napis){

*napis = '\0';
}
void wyznasc5(char* napis){
*napis = 0;
}
int main()
{
   char n1[] = "ABC";
   printf("%s.\n", n1);
   wyznasc1(n1);
   printf("%s.\n", n1);
   wchar_t n2[] = L"ABC";
   wprintf(L"%s.\n", n2);
   wyznasc5(n2);
   wprintf(L"%s.\n", n2);
    return 0;
}
