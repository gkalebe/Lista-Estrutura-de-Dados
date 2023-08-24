#include <stdio.h>
#include <string.h>

#define MAX_PRODUTOS 100

typedef struct {
	
    char nome[50];
    float preco;
    int quantidade;
    
} Produto;

Produto produtos[MAX_PRODUTOS];
int num_produtos = 0;

void adicionar_produto() {
	
    if (num_produtos == MAX_PRODUTOS) {
        printf("Nao e possível adicionar mais produtos.\n");
        return;
    }

    printf("Nome: ");
    scanf(" %[^\n]", produtos[num_produtos].nome);
    printf("Preco: ");
    scanf("%f", &produtos[num_produtos].preco);
    printf("Quantidade: ");
    scanf("%d", &produtos[num_produtos].quantidade);

    num_produtos++;
}

void comprar_produto() {
	
    char nome[50];
    printf("Nome do produto: ");
    scanf(" %[^\n]", nome);

    int quantidade;
    printf("Quantidade: ");
    scanf("%d", &quantidade);

    int i;
    for (i = 0; i < num_produtos; i++) {
        if (strcmp(produtos[i].nome, nome) == 0) {
            if (quantidade > produtos[i].quantidade) {
                printf("Quantidade insuficiente em estoque.\n");
                return;
            }

            produtos[i].quantidade -= quantidade;
            float total = quantidade * produtos[i].preco;
            printf("Total da compra: R$%.2f\n", total);
            return;
        }
    }

    printf("Produto nao encontrado.\n");
}

int main() {
	
    int opcao;
    
    do { 
        printf("\nMenu:\n");
        printf("1. Adicionar produto\n");
        printf("2. Comprar produto\n");
        printf("3. Sair\n");
        printf("Opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                adicionar_produto();
                break;
            case 2:
                comprar_produto();
                break;
            case 3:
                break;
            default:
                printf("Opcao invalida.\n");
                break;
        }
    } while (opcao != 3);

    return 0;
    
}

