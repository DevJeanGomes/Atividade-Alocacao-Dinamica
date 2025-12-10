#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//PS: tive que pedir uma ajuda maior nessa professor, n tava conseguindo fazer xD

//função para alocar dinamicamente essa string. 
char *alocar_string(int tamanho) {
    return (char *) malloc(tamanho * sizeof(char));
}

int main() {

    int tamanho;
    char *str;

    //tamanho de uma string
    printf("Digite o tamanho da string: ");
        scanf("%d", &tamanho);

    //chame uma função para alocar dinamicamente essa string.
    str = alocar_string(tamanho + 1);

    // Em seguida, o usuário deverá informar o conteúdo dessa string.
    printf("Digite o texto: ");
        scanf(" %[^\n]", str);

    printf(" /n String sem vogais: /n ");

    //imprime a string sem suas vogais.
    for (int i = 0; str[i] != '\0'; i++) {
        char c = str[i];
        if (!(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||
              c=='A'||c=='E'||c=='I'||c=='O'||c=='U')) {
            printf("%c", c);
        }
    }

    system("pause");

    free(str);

    return 0;
}
