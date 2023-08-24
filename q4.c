#include <stdio.h>
#include <string.h>

#define MAX_CONTATOS 100

typedef struct {
	
    char nome[50];
    char telefone[20];
    
} Contato;

Contato contatos[MAX_CONTATOS];
int num_contatos = 0;

void adicionar_contato() {
	
    if (num_contatos == MAX_CONTATOS) {
        printf("A lista de contatos esta cheia!\n");
        return;
    }
    
    printf("Nome: ");
    scanf("%s", contatos[num_contatos].nome);
    printf("Telefone: ");
    scanf("%s", contatos[num_contatos].telefone);
    num_contatos++;
}

void listar_contatos() {
	
    int i;
    for (i = 0; i < num_contatos; i++) {
        printf("%s - %s\n", contatos[i].nome, contatos[i].telefone);
    }
}

void buscar_contato() {
	
    char nome[50];
    int i;
    printf("Nome: ");
    scanf("%s", nome);
    for (i = 0; i < num_contatos; i++) {
        if (strcmp(contatos[i].nome, nome) == 0) {
            printf("%s - %s\n", contatos[i].nome, contatos[i].telefone);
            return;
        }
    }
    
    printf("Contato nao encontrado!\n");
    
}

int main() {
	
    int opcao;
    
    do {
        printf("\n1. Adicionar contato\n");
        printf("2. Listar contatos\n");
        printf("3. Buscar contato\n");
        printf("4. Sair\n");
        printf("Opção: ");
        scanf("%d", &opcao);
        switch (opcao) {
            case 1:
                adicionar_contato();
                break;
            case 2:
                listar_contatos();
                break;
            case 3:
                buscar_contato();
                break;
            case 4:
                break;
            default:
                printf("Opção invalida!\n");
        }
    } while (opcao != 4);
    
    return 0;
}

