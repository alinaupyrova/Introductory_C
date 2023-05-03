#include <stdio.h>
#include <stdlib.h>

int suma_elementow(int n, int m, int tab[n][m]) {
    int suma = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            suma += tab[i][j];
        }
    }
    return suma;
}

int main() {
    int n = 2;
    int m = 3;
    int tab[2][3] = {{1, 2, 3}, {3, 2, 1}};
    int result = suma_elementow(n, m, tab);
    printf("%d\n", result);
    return 0;
}
