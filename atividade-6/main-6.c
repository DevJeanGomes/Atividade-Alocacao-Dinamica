#include <stdio.h>
#include <stdlib.h>

int main() {
    int bytes, *mem, pos, op, valor;

    printf("Digite o tamanho da memoria (em bytes, multiplo de %d): ", sizeof(int));
    scanf("%d", &bytes);

    if (bytes % sizeof(int) != 0) {
        printf("Tamanho invalido!\n");
        return 1;
    }

    int tam = bytes / sizeof(int);

    mem = (int *) calloc(tam, sizeof(int));

    do {
        printf("\n1 - Inserir valor\n2 - Consultar valor\n0 - Sair\nOpcao: ");
        scanf("%d", &op);

        if (op == 1) {
            printf("Posicao: ");
            scanf("%d", &pos);
            printf("Valor: ");
            scanf("%d", &valor);
            mem[pos] = valor;
        } else if (op == 2) {
            printf("Posicao: ");
            scanf("%d", &pos);
            printf("Valor na posicao: %d\n", mem[pos]);
        }

    } while (op != 0);

    free(mem);
    return 0;
}
