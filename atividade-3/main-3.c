#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, *v, pares = 0, impares = 0;

    printf("Digite o tamanho do vetor: ");
        scanf("%d", &n);

    v = (int *) malloc(n * sizeof(int));

    for (int i = 0; i < n; i++) {
        printf("Digite o valor %d: ", i + 1);
            scanf("%d", &v[i]);

        if (v[i] % 2 == 0)
            pares++;
        else
            impares++;
    }

    printf("\nPares: %d\nImpares: %d\n", pares, impares);

    free(v);
    return 0;
}
