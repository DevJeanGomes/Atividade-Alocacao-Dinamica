#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int n;
    double *v;
	
	//Faça um programa que pergunte ao usuário quantos valores ele deseja armazenar em um vetor de double
    printf("Quantos valores deseja? (>=10): ");
    	scanf("%d", &n);
	
	//esse IF e para cumprir essa parte - Esse vetor deve ter um tamanho maior ou igual a 10 elementos.
    if (n < 10) n = 10;
	
	//depois use a função MALLOC para reservar (alocar) o espaço de memória de acordo com o especificado pelo usuário.
    v = (double *) malloc(n * sizeof(double));
	
	//peguei esse codigo para os numeros mudarem toda vez que roda o programa
    srand(time(NULL));
	
	// atribuindo aos 10 primeiros elementos do vetor valores aleatórios
    for (int i = 0; i < n; i++) {
        v[i] = rand() % 101;
    }
    
	//Exiba na tela os valores armazenados nos 10 primeiros elementos do vetor.
    printf("Primeiros %d valores: \n", n);
    for (int i = 0; i < n; i++) {
        printf("%.2lf ", v[i]);
    }

	system("pause");
	
    free(v);
    
    return 0;
}
