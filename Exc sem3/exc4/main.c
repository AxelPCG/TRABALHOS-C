#include <stdio.h>
#include <ctype.h>

int main()
{
    char letra, letram;
    printf("Entre com uma letra minuscula a ser tranforma em maiuscula: ");
    scanf("%c",&letra);
    letram=toupper(letra);
    printf("A letra maiuscula eh: %c",letram);
    return 0;
}
