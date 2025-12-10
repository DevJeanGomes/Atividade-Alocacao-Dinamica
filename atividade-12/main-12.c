#include <stdio.h>
#include <stdlib.h>

//Considere um cadastro de produtos de um estoque, com as seguintes informações para cada produto:
//Código de identificação do produto: representado por um valor inteiro
//Nome do produto: com até 50 caracteres
//Quantidade disponível no estoque: representado por um número inteiro
//Preço de venda: representado por um valor real

//(a) Defina uma estrutura, denominada produto, que tenha os campos apropriados para guardar as informações de um produto
struct produto {
    int codigo;
    char nome[50];
    int quantidade;
    float preco;
};

int main() {
	
    int N;
    struct produto *p;
	
	//(b) Crie um conjunto de N produtos (N é um valor fornecido pelo usuário)
    printf("Quantidade de produtos: ");
    	scanf("%d", &N);
	
    p = (struct produto *) malloc(N * sizeof(struct produto));
	
	//e peça ao usuário para entrar com as informações de cada produto
    for (int i = 0; i < N; i++) {
        printf("Codigo: ");
        	scanf("%d", &p[i].codigo);

        printf("Nome: ");
        	scanf(" %[^\n]", p[i].nome);

        printf("Quantidade: ");
        	scanf("%d", &p[i].quantidade);

        printf("Preco: ");
        	scanf("%f", &p[i].preco);
    }

    int Maior_preco = 0;
	int Maior_qtd = 0;
	
	//(c) Encontre o produto com o maior preço de venda
	//(d) Encontre o produto com a maior quantidade disponível no estoque
    for (int i = 1; i < N; i++) {
        if (p[i].preco > p[Maior_preco].preco)
            Maior_preco = i;

        if (p[i].quantidade > p[Maior_qtd].quantidade)
            Maior_qtd = i;
    }

    printf("Produto mais caro: %s\n", p[Maior_preco].nome);
    printf("Maior estoque: %s\n", p[Maior_qtd].nome);
    
	system("pause");
	
    free(p);
    
    return 0;
}
