#include <stdio.h>
#include <stdlib.h>

int main() {
    int N, X, *v, cont = 0;

    printf("Digite N: ");
    scanf("%d", &N);

    v = (int *) malloc(N * sizeof(int));

    for (int i = 0; i < N; i++) {
        printf("Digite o valor %d: ", i + 1);
        scanf("%d", &v[i]);
    }

    printf("Digite X: ");
    scanf("%d", &X);

    for (int i = 0; i < N; i++) {
        if (v[i] % X == 0)
            cont++;
    }

    printf("Multiplos de %d: %d\n", X, cont);

    free(v);
    return 0;
}
