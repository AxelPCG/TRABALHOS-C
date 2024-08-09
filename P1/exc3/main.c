/**********************************************************
* Autor: Axel P. C. Gonzaga                               *
* Unidade curricular: Programação de Computadores I       *
* Data: 15/07/2021                                        *
* Questão 1: Soma de uma PA                               *
***********************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main()
{
    setlocale(LC_CTYPE, "");
    int v, n, d, total, x;

    printf ("Entre com o valor do primeiro elemento da PA:");
    scanf("%d", &v);
    printf ("\nEntre com o número de termos da PA: ");
    scanf("%d", &n);
    printf("\nEntre com a diferença entre os termos da PA: ");
    scanf("%d", &d);

    for (x=v; x<=n; x+=d)
    {
        printf("%d ", x);
        total+=x;
    }
    printf("\n");
    printf("A soma da PA é: %d", total);
    return 0;
}

