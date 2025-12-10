#include <stdio.h>
#include <stdlib.h>

int main() {

    int n, *v, pares = 0, impares = 0;

    //Faça um programa que leia do usuário o tamanho de um vetor a ser lido
    printf("Digite o tamanho do vetor: ");
        scanf("%d", &n);

    // e faça a alocação dinâmica de memória.
    v = (int *) malloc(n * sizeof(int));

    //Em seguida, leia do usuário seus valores
    for (int i = 0; i < n; i++) {
        printf("Digite o valor %d: ", i + 1);
            scanf("%d", &v[i]);

        if (v[i] % 2 == 0)
            pares++;
        else
            impares++;
    }

    //e mostre quantos dos números são pares e quantos são ímpares.
    printf("\nPares: %d \n Impares: %d \n ", pares, impares);

    system("pause");

    free(v);

    return 0;
}
