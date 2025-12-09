#include <stdio.h>
#include <stdlib.h>

int busca(int **m, int l, int c, int valor) {
    for (int i = 0; i < l; i++)
        for (int j = 0; j < c; j++)
            if (m[i][j] == valor)
                return 1;
    return 0;
}

int main() {
    int l, c, x;

    printf("Linhas: ");
    scanf("%d", &l);

    printf("Colunas: ");
    scanf("%d", &c);

    int **m = (int **) malloc(l * sizeof(int*));

    for (int i = 0; i < l; i++) {
        m[i] = (int *) malloc(c * sizeof(int));
    }

    for (int i = 0; i < l; i++)
        for (int j = 0; j < c; j++)
            scanf("%d", &m[i][j]);

    printf("Valor para buscar: ");
    scanf("%d", &x);

    printf("Resultado: %d\n", busca(m, l, c, x));

    for (int i = 0; i < l; i++)
        free(m[i]);
    free(m);

    return 0;
}
