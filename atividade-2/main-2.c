#include <stdio.h>
#include <stdlib.h>

int main() {

    int n, *v;

    //Faça um programa que leia do usuário o tamanho de um vetor a ser lido
    printf("Digite o tamanho do vetor: ");
        scanf("%d", &n);

    //e faça alocação dinâmica de memória.
    v = (int *) malloc(n * sizeof(int));

    //tive que colocar isso pq tava dando erro para alocar a memoria e eu n sabia resolver
    if (v == NULL) {
        printf("Erro de alocacao!\n");
        return 1;
    }

    //leia do usuário seus valores
    for (int i = 0; i < n; i++) {
        printf("Digite o valor %d: ", i + 1);
            scanf("%d", &v[i]);
    }

    printf("\nVetor:\n");

    //imprima o vetor lido.
    for (int i = 0; i < n; i++) {
        printf("%d ", v[i]);
    }

    system("pause");
    
    free(v);

    return 0;
}
