#include <stdio.h>
#include <stdbool.h>

bool czywyst(char c, char* napis){
    int i = 0;
    for(i; napis[i] != 0; i++){
        if(napis[i] == c)
            return true;
    }
    return false;
}

void wytnijzn(char* nap1, char* nap2){
    int i = 0, j = 0;
    for(i, j; nap1[i] != 0; i++){
        if(czywyst(nap1[i], nap2) == true){
            if(j < i){
                nap1[j] = nap1[i];
            }
            j++;
        }
    }
    nap1[j] = 0;
}

int main()
{
    char str1[] = "malina";
    char str2[] = "kalina";
    wytnijzn(str1, str2);
    printf("%s", str1);
    return 0;
}
