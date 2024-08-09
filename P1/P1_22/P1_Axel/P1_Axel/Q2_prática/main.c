/**********************************************************
* Autor: Axel P. C. Gonzaga                               *
* Unidade curricular: Programação de Computadores I       *
* Data: 25/05/2022                                        *
* Questão 2: Gerador de números aleatórios                *
***********************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

int main()
{
    setlocale(LC_ALL, "");
    int x=15, i, j, opcao, temp, soma = 0;
    srand(time(NULL));
    int vetor [x];
    for (i=0; i<x; i++)
    {
        vetor[i]=rand()%50;
    }
    for (i=0; i<x; i++)
        printf("%d ",vetor[i]);

    do
    {
        printf("\n 1 - Imprimir vetor em ordem crescente\n 2 - Soma dos elementos do vetor\n 0 - Sair\n\n");
        scanf("%d", &opcao);
        switch(opcao)
        {
        case 0:
            printf("Saindo...\n");
            break;
        case 1:
            printf("Ordem crescente...  \n");
            for (i=0; i<x; i++)
                for(j=i+1; j<x; j++)
                {
                    if (vetor[i]>vetor[j])
                    {
                        temp=vetor[i];
                        vetor[i]=vetor[j];
                        vetor[j]=temp;
                    }
                }
            for (j=0; j<x; j++)
            {
                printf("%d - %d\n", j + 1, vetor[j]);

            }
            break;
        case 2:
            for(j=0; j<x; j++)
            {
                soma=soma+vetor[j];
            }
            printf("Soma: %d\n", soma);
            break;
        default:
            printf("Opcao inválida. \nDigite outra opcao: ");
        }
    }
    while(opcao != 0);
}


