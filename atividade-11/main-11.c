#include <stdio.h>
#include <stdlib.h>

struct aluno {
    int matricula;
    char sobrenome[30];
    int ano_nascimento;
};

int main() {
    int n;
    struct aluno *a;

    printf("Quantidade de alunos: ");
    scanf("%d", &n);

    a = (struct aluno *) malloc(n * sizeof(struct aluno));

    for (int i = 0; i < n; i++) {
        printf("Matricula: ");
        scanf("%d", &a[i].matricula);

        printf("Sobrenome: ");
        scanf("%s", a[i].sobrenome);

        printf("Ano de nascimento: ");
        scanf("%d", &a[i].ano_nascimento);
    }

    printf("\nDados dos alunos:\n");
    for (int i = 0; i < n; i++) {
        printf("%d %s %d\n", a[i].matricula, a[i].sobrenome, a[i].ano_nascimento);
    }

    free(a);
    return 0;
}
