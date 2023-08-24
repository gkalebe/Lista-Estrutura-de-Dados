#include <stdio.h>


typedef struct {
	
    float valor;
    char moeda[4];
    
} Moeda;


float converter(Moeda m, float taxa) {
	
    if (m.moeda[0] == 'E') {
        return m.valor * taxa;
    } else {
        return m.valor / taxa;
    }
    
}

int main() {
	
    Moeda m;
    float taxa = 1.08675;

    printf("Valor: ");
    scanf("%f", &m.valor);
    printf("Moeda (EUR ou USD): ");
    scanf("%s", m.moeda);

    float convertido = converter(m, taxa);
    if (m.moeda[0] == 'E') {
        printf("%.2f EUR = %.2f USD\n", m.valor, convertido);
    } else {
        printf("%.2f USD = %.2f EUR\n", m.valor, convertido);
    }


    return 0;
}

