#include <stdio.h>
#include <stdlib.h>
#define TAM 5


int main() {

    //(a) Aloque dinamicamente um array de 5 números inteiros.
    int *p = (int *) malloc(sizeof(int) * TAM);
    int *inicio = p;
    int v;

    //(b) Peça para o usuário digitar os 5 números no espaço alocado.
    for(int i = 0; i < TAM; i++) {
        printf("Digite o valor %d: ", i + 1);
            scanf("%d", &v);
        *p = v;
        p++;
    }

    p = inicio;

    //(c) Mostre na tela os 5 números.
    printf("\nValores digitados:\n");
    for(int i = 0; i < TAM; i++) {
        printf("%d ", *p);
        p++;
    }

    //(d) Libere a memória alocada.
    free(inicio);

    return 0;
}
