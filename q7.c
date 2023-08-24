#include <stdio.h>
#include <string.h>

typedef struct {
	
    char nome[50];
    int numero;
    float saldo;
    
} ContaBancaria;

void depositar(ContaBancaria *conta, float valor) {
    conta->saldo += valor;
}

void sacar(ContaBancaria *conta, float valor) {
    if (valor > conta->saldo) {
        printf("Saldo insuficiente.\n");
        return;
    }
    conta->saldo -= valor;
}

void verificar_saldo(ContaBancaria *conta) {
    printf("Saldo: R$%.2f\n", conta->saldo);
}

int main() {
    ContaBancaria conta;
    strcpy(conta.nome, "Gabriel Sousa");
    conta.numero = 12345;
    conta.saldo = 1000.0;

    int opcao;
    float valor;
    
    do {
        printf("\nMenu:\n");
        printf("1. Depositar\n");
        printf("2. Sacar\n");
        printf("3. Verificar saldo\n");
        printf("4. Sair\n");
        printf("Opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
        	
            case 1:
                printf("Valor: ");
                scanf("%f", &valor);
                depositar(&conta, valor);
                break;
            case 2:
                printf("Valor: ");
                scanf("%f", &valor);
                sacar(&conta, valor);
                break;
            case 3:
                verificar_saldo(&conta);
                break;
            case 4:
                break;
            default:
                printf("Opcao invalida.\n");
                break;
        }
    } while (opcao != 4);

    return 0;
}

