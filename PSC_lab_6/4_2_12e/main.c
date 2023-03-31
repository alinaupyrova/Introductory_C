#include <stdio.h>
#include <stdlib.h>

void sort(int n, int *tab) {
    int i, j, temp;
    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            if (tab[j] > tab[i]) {
                temp = tab[i];
                tab[i] = tab[j];
                tab[j] = temp;
            }
        }
    }
}

int main() {
    int n = 4;
    int tab[] = {1, 5, 3, 0};
    sort(n, tab);
    for (int i = 0; i < n; i++) {
        printf("%d\n", tab[i]);
    }
    return 0;
}
