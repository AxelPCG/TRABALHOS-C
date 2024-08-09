/**********************************************************
* Autor: Axel P. C. Gonzaga                               *
* Unidade curricular: Programação de Computadores I       *
* Data: 09/09/2021                                        *
* Questão 3: Conta dígitos                                *
***********************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int compara(int,int);

int main()
{
    int n, d;
    setlocale(LC_ALL, "");

        printf("Digíte um número inteiro qualquer: ");
        scanf("%d", &n);
        while(1)
    {
        fflush(stdin);
        printf("Digite o número de um dígito a ser comparado: ");
        scanf("%d", &d);
        if(d<10&&d!=11)
            break;
        printf("\nErro ao ler o numero!\nTente novamente!!\n");
    }
    printf("Com n = %d o dígito d = %d aparece %d vezes", n, d, compara(n, d));
    return 0;
}
int compara(int x, int y)
{
    int conta, resto;
    conta = 0;
    while (x != 0)
    {
        resto = x % 10;
        x = x/10;
        if (resto == y)
            conta++;
    }
    return conta;
}
