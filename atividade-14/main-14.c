#include <stdio.h>
#include <stdlib.h>

int main() {
	
    int l, c;
    float **m;
	
	//14.Construa um programa que leia o número de linhas e de colunas de uma matriz de números reais
    printf("Linhas: ");
    	scanf("%d", &l);

    printf("Colunas: ");
    	scanf("%d", &c);
	
	//aloque espaço dinamicamente para esta e a inicialize com valores fornecidos pelo usuário.
    m = (float **) malloc(l * sizeof(float*));

    for (int i = 0; i < l; i++) {
        m[i] = (float *) malloc(c * sizeof(float));
    }

    for (int i = 0; i < l; i++) {
        for (int j = 0; j < c; j++) {
            printf("m[%d][%d]: ", i, j);
                scanf("%f", &m[i][j]);
        }
    }
	
	//o programa deverá retornar a matriz na saída padrão com layout apropriado.
    printf("\nMatriz:\n");
    for (int i = 0; i < l; i++) {
        for (int j = 0; j < c; j++) {
            printf("%.2f ", m[i][j]);
        }
        printf("\n");
    }
	
	system("pause");
	
    for (int i = 0; i < l; i++)
        free(m[i]);
    		free(m);
	
	
    return 0;
}
