#include <stdio.h>
#include <stdlib.h>

//função para - (a) Deverão ser armazenados, para cada aluno: matrícula, sobrenome (apenas um) e ano de nascimento.
struct aluno {
    int matricula;
    char sobrenome[30];
    int ano_nascimento;
};

int main() {
	
    int n;
    struct aluno *a;
    

	//(b) Ao início do programa, o usuário deverá informar o número de alunos que serão armazenados
    printf("Quantidade de alunos: ");
    	scanf("%d", &n);

	
	//Alocação de memória
    a = (struct aluno *) malloc(n * sizeof(struct aluno));
	
	//(d) O programa deverá pedir ao usuário que entre com as informações dos alunos.
    for (int i = 0; i < n; i++) {
        printf("Matricula aluno: ");
        	scanf("%d", &a[i].matricula);

        printf("Sobrenome aluno: ");
        	scanf("%s", a[i].sobrenome);

        printf("Ano de nascimento: ");
        	scanf("%d", &a[i].ano_nascimento);
    }

	//(e) Ao final, mostrar os dados armazenados e liberar a memória alocada.
    printf("\nDados dos alunos:\n");
    for (int i = 0; i < n; i++) {
        printf("%d / %s / %d\n", a[i].matricula, a[i].sobrenome, a[i].ano_nascimento);
    }

	system("pause");
	
    free(a);
    
    return 0;
}
