#include <stdio.h>
#include <stdlib.h>

int main() {
	
    int sorteio[6], bilhete[6];
    int *acertos;
    int cont = 0;
	
	//Escreva um programa que leia primeiro os 6 números gerados pela loteria
    printf("Numeros sorteados:\n");
    for (int i = 0; i < 6; i++) {
        scanf("%d", &sorteio[i]);
    }
    
	//e depois os 6 números do seu bilhete.
    printf("Seus numeros:\n");
    for (int i = 0; i < 6; i++) {
        scanf("%d", &bilhete[i]);
    }
	
	//O programa então compara quantos números o jogador acertou.
    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 6; j++) {
            if (bilhete[i] == sorteio[j]) {
                cont++;
            }
        }
    }
	
	//Em seguida, ele aloca espaço para um vetor de tamanho igual a quantidade de números corretos
    acertos = (int *) malloc(cont * sizeof(int));

    int k = 0;
    
    //e guarda os números corretos nesse vetor.
    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 6; j++) {
            if (bilhete[i] == sorteio[j]) {
                acertos[k++] = bilhete[i];
            }
        }
    }
    
	//Finalmente, o programa exibe os números sorteados e os seus números corretos.
    printf("Acertos:\n");
    for (int i = 0; i < cont; i++) {
        printf("%d ", acertos[i]);
    }
	
	system("pause");
	
    free(acertos);
    
    return 0;
}
