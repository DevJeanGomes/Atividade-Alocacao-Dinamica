#include <stdio.h>
#include <stdlib.h>

struct produto {
    int codigo;
    char nome[50];
    int quantidade;
    float preco;
};

int main() {
    int N;
    struct produto *p;

    printf("Quantidade de produtos: ");
    scanf("%d", &N);

    p = (struct produto *) malloc(N * sizeof(struct produto));

    for (int i = 0; i < N; i++) {
        printf("Codigo: ");
        scanf("%d", &p[i].codigo);

        printf("Nome: ");
        scanf(" %[^\n]", p[i].nome);

        printf("Quantidade: ");
        scanf("%d", &p[i].quantidade);

        printf("Preco: ");
        scanf("%f", &p[i].preco);
    }

    int idx_preco = 0, idx_qtd = 0;

    for (int i = 1; i < N; i++) {
        if (p[i].preco > p[idx_preco].preco)
            idx_preco = i;

        if (p[i].quantidade > p[idx_qtd].quantidade)
            idx_qtd = i;
    }

    printf("Produto mais caro: %s\n", p[idx_preco].nome);
    printf("Maior estoque: %s\n", p[idx_qtd].nome);

    free(p);
    return 0;
}
