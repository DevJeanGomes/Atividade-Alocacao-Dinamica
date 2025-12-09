#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, *v;

    printf("Digite o tamanho do vetor: ");
        scanf("%d", &n);

    v = (int *) malloc(n * sizeof(int));

    if (v == NULL) {
        printf("Erro de alocacao!\n");
        return 1;
    }

    for (int i = 0; i < n; i++) {
        printf("Digite o valor %d: ", i + 1);
            scanf("%d", &v[i]);
    }

    printf("\nVetor:\n");

    for (int i = 0; i < n; i++) {
        printf("%d ", v[i]);
    }

    free(v);

    return 0;
}
