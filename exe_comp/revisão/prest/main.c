#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float valor_mercadoria, entrada;
    int parcelas;
    printf("Entre com o valor da mercadoria: ");
    scanf("%f", &valor_mercadoria);
    parcelas = valor_mercadoria/3;
    entrada = valor_mercadoria - 2*parcelas;
    printf("Entrada: R$ %.2f + 2 parcelas de: R$ %d.", entrada, parcelas);
    return 0;
}
