#include <stdio.h>
#include <stdlib.h>
#include <wchar.h>

void wytnij(char *napis, int n, int m) {
    if (n < m) {
        int i, j;
        for (i = n, j = m + 1; napis[j] != 0; ++i, ++j) {
            napis[i] = napis[j];
        }
        napis[i] = 0;
    }
}

void wytnij_2(wchar_t* napis_2, int n, int m){
 if (n < m) {
        int i, j;
        for (i = n, j = m + 1; napis_2[j] != 0; ++i, ++j) {
            napis_2[i] = napis_2[j];
        }
        napis_2[i] = 0;
    }
}

int main() {
    int n = 2;
    int m = 4;
    char str[] = "abcdABCD";
    wchar_t str2[] = L"abcdABCD";
    printf("%s\n", str);
    wytnij(str, n, m);
    printf("Result is %s\n", str);

    wprintf(L"%ls\n", str2);
    wytnij_2(str2,n,m);
    wprintf(L"Result is %ls\n", str2);

    return 0;
}
