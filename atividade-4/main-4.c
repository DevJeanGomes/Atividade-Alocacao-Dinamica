#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *alocar_string(int tamanho) {
    return (char *) malloc(tamanho * sizeof(char));
}

int main() {
    int tamanho;
    char *str;

    printf("Digite o tamanho da string: ");
    scanf("%d", &tamanho);

    str = alocar_string(tamanho + 1);

    printf("Digite o texto: ");
    scanf(" %[^\n]", str);

    printf("\nString sem vogais: ");
    for (int i = 0; str[i] != '\0'; i++) {
        char c = str[i];
        if (!(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||
              c=='A'||c=='E'||c=='I'||c=='O'||c=='U')) {
            printf("%c", c);
        }
    }

    free(str);
    return 0;
}
