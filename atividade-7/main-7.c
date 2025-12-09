#include <stdio.h>
#include <stdlib.h>

int main() {
    int sorteio[6], bilhete[6];
    int *acertos;
    int cont = 0;

    printf("Numeros sorteados:\n");
    for (int i = 0; i < 6; i++) {
        scanf("%d", &sorteio[i]);
    }

    printf("Seus numeros:\n");
    for (int i = 0; i < 6; i++) {
        scanf("%d", &bilhete[i]);
    }

    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 6; j++) {
            if (bilhete[i] == sorteio[j]) {
                cont++;
            }
        }
    }

    acertos = (int *) malloc(cont * sizeof(int));

    int k = 0;
    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 6; j++) {
            if (bilhete[i] == sorteio[j]) {
                acertos[k++] = bilhete[i];
            }
        }
    }

    printf("Acertos:\n");
    for (int i = 0; i < cont; i++) {
        printf("%d ", acertos[i]);
    }

    free(acertos);
    return 0;
}
