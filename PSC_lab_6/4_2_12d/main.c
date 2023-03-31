#include <stdio.h>
#include <stdlib.h>

int maximum( int n, int *tab) {
    int max = 0;
    for (int i = 1; i < n; i++) {
        if (tab[i] > tab[max])
            max = i;
    }
    return max;
}

void sort( int n, int *tab) {
    int i, j, pom;
    for (i = 0; i < n - 1; i++) {
        j = maximum(n - i, tab);
        pom = tab[n - i - 1];
        tab[n - i - 1] = tab[j];
        tab[j] = pom;
    }
}

int main()
{
    int n = 4;
    int tab[] = {1,5,3,0};
    sort(n, tab);
    for(int i = 0; i < n; i++)
    {
        printf("%d\n", *(tab+i));
    }
    return 0;
}
