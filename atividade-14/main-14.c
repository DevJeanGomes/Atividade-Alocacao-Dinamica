#include <stdio.h>
#include <stdlib.h>

int main() {
    int l, c;
    float **m;

    printf("Linhas: ");
    scanf("%d", &l);

    printf("Colunas: ");
    scanf("%d", &c);

    m = (float **) malloc(l * sizeof(float*));

    for (int i = 0; i < l; i++) {
        m[i] = (float *) malloc(c * sizeof(float));
    }

    for (int i = 0; i < l; i++) {
        for (int j = 0; j < c; j++) {
            printf("m[%d][%d]: ", i, j);
            scanf("%f", &m[i][j]);
        }
    }

    printf("\nMatriz:\n");
    for (int i = 0; i < l; i++) {
        for (int j = 0; j < c; j++) {
            printf("%.2f ", m[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < l; i++)
        free(m[i]);
    free(m);

    return 0;
}
