#include <stdio.h>
#include <stdlib.h>

int main() {
    int *v = 0;
    int num, tam = 0;
	
	
	//9. leia uma quantidade qualquer de números e armazene na memória e pare quando o tiver um número negativo.
    while (1) {
        printf("Digite um numero (negativo para parar): ");
        	scanf("%d", &num);

        if (num < 0) break;
        
		//alocação de memória
        v = (int *) realloc(v, (tam + 1) * sizeof(int));

        v[tam++] = num;
    }
    
	//imprima o vetor lido
    printf("Valores armazenados:\n");
    for (int i = 0; i < tam; i++) {
        printf("%d ", v[i]);
    }
    
    system("pause");

    free(v);
    
    return 0;
}
