#include <stdio.h>
#include <stdlib.h>

int foo( int n, int m, int tab[n][m])
{
    int max_index = 0;
    double max_srednia = 0;
    for (int i = 0; i < n; i++) {
        double srednia = 0;
        for (int j = 0; j < m; j++) {
            srednia += tab[i][j];
        }
        if (srednia > max_srednia) {
            max_srednia = srednia;
            max_index = i;
        }
    }
    return max_index;
}

int main()
{
    int n = 2;
    int m = 3;
    int tab[2][3] = {{1, 2, 3}, {3, 2, 6}};
    int result = foo(tab, n, m);
    printf("%d\n", result);
    return 0;
}

