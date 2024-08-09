#include <stdio.h>
#include <string.h>

int main()
{
    char nome_completo [40], nome [20];
    printf("informe o seu nome completo: ");
    gets(nome_completo);
    int i = strcspn(nome_completo," ");
    strncpy(nome, nome_completo, i);
    nome[i] = '\0';
    printf("Bem vindo, %s!",nome);
    return 0;
}
