#include <stdio.h>
#include <stdlib.h>
#include <time.h>   // necessário para o rand()

//função que receba um valor, retorne 1 caso o valor esteja na matriz ou retorne 0 caso não esteja na matriz.
int busca(int **m, int l, int c, int valor) {
    for (int i = 0; i < l; i++)
        for (int j = 0; j < c; j++)
            if (m[i][j] == valor)
                return 1;
    return 0;
}

int main() {
	
    int l, c, x;
	
    printf("Linhas: ");
    	scanf("%d", &l);

    printf("Colunas: ");
    	scanf("%d", &c);

    int **m = (int **) malloc(l * sizeof(int*));

    for (int i = 0; i < l; i++) {
        m[i] = (int *) malloc(c * sizeof(int));
    }

    // gerador de números aleatórios
    srand(time(NULL));

    // FOR para preencher a matriz com valores aleatórios
    for (int i = 0; i < l; i++) {
        for (int j = 0; j < c; j++) {
            m[i][j] = rand() % 100; 
        }
    }

    printf("\nValor para buscar: ");
    	scanf("%d", &x);

    printf("Resultado: %d\n", busca(m, l, c, x));
    
    //Mostrar a matriz gerada na tela
    printf("\nMatriz gerada:\n");
    for (int i = 0; i < l; i++) {
        for (int j = 0; j < c; j++) {
            printf("%3d ", m[i][j]);
        }
        printf("\n");
    }
	
    system("pause");
	
    for (int i = 0; i < l; i++)
        free(m[i]);
    		free(m);

    return 0;
}
