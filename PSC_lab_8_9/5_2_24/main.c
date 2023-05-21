
// First case 

#include <stdio.h>
#include <stdlib.h>
#include <wchar.h>

void kopiuj(char* napis, char* tablica){
    int i = 0;
    while (napis[i] != 0){
        tablica[i] = napis[i];
        i++;
    }
    tablica[i] = 0;
}

void kopiuj_wchar(wchar_t* napis, wchar_t* tablica){
    int i = 0;
    while (napis[i] != L'\0'){
        tablica[i] = napis[i];
        i++;
    }
    tablica[i] = L'\0';
}

int main(){
    char napis_char[] = "Ala ma kota";
    wchar_t napis_wchar[] = L"ala ma kota ";
    char tablica_char[20];
    wchar_t tablica_wchar[20];
    kopiuj(napis_char, tablica_char);
    kopiuj_wchar(napis_wchar,tablica_wchar);
    printf("%s\n", tablica_char);
   wprintf(L"%s\n", tablica_wchar);

    return 0;
}


