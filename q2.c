#include <stdio.h>
#include <stdlib.h>

struct Tipo {
    int Inteiro;
    float pontoFlutuante;
    char letra;
};

int main() {
	
    struct Tipo exemplo;

    struct Tipo *Exemplo = &exemplo;

    Exemplo->Inteiro = 20;
    Exemplo->pontoFlutuante = 1.74;
    Exemplo->letra = 'G';

    printf("Valor Inteiro: %d\n", Exemplo->Inteiro);
    printf("Ponto Flutuante: %.2f\n", Exemplo->pontoFlutuante);
    printf("Letra: %c\n", Exemplo->letra);

    return 0;
}

