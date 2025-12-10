#include <stdio.h>
#include <stdlib.h>

int main() {
	
    int N;
	int X;
	int *v;
	int cont = 0;
	
	//Faça um programa que leia um número N e:
    printf("Digite N: ");
    	scanf("%d", &N);
    	
	//Crie dinamicamente e leia um vetor de inteiro de N posições;
    v = (int *) malloc(N * sizeof(int));
    for (int i = 0; i < N; i++) {
        printf("Digite o valor %d: ", i + 1);
        	scanf("%d", &v[i]);
    }
    
	//Leia um número inteiro X
    printf("Digite X: ");
    	scanf("%d", &X);
    	
	//e conte e mostre os múltiplos desse número que existem no vetor.
    for (int i = 0; i < N; i++) {
        if (v[i] % X == 0)
            cont++;
    }

    printf("Multiplos de %d: %d\n", X, cont);
    
    system("pause");

    free(v);
    
    return 0;
}
