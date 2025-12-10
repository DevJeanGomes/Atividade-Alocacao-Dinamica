#include <stdio.h>
#include <stdlib.h>

int main() {

    // Alocar memória para 1500 inteiros
    int *v = (int *) calloc(1500, sizeof(int));


    // (a) Contar quantos zeros existem no vetor
    int contZeros = 0;
    for (int i = 0; i < 1500; i++) {
        if (v[i] == 0) {
            contZeros++;
        }
    }
    
    // mostra a quantidade de zeros
    printf("Quantidade de zeros : %d\n\n", contZeros);

    // (b) Atribuir o valor do índice para cada posição do vetor
    for (int i = 0; i < 1500; i++) {
        v[i] = i;
    }

    // (c) Mostrar os 10 primeiros elementos
    printf("10 primeiros elementos:\n");
    for (int i = 0; i < 10; i++) {
        printf("%d ", v[i]);
    }

    // Mostrar os 10 últimos elementos
    printf("\n\n10 ultimos elementos:\n");
    for (int i = 1490; i < 1500; i++) {
        printf("%d ", v[i]);
    }
    
    system("pause");

    free(v);

    return 0;
}
