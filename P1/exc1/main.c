/**********************************************************
* Autor: Axel P. C. Gonzaga                               *
* Unidade curricular: Programa��o de Computadores I       *
* Data: 15/07/2021                                        *
* Quest�o 1: Pagamento de uma mercadoria e valor do caixa *
***********************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main()
{
    setlocale(LC_CTYPE, "");
    char escolha,a;
    float vm,vm3,vm4,vm5,vm6,total,n;

    while (1)
    {
        printf ("Escolha uma op��o:");
        printf ("\n<a> A vista com 5%% de desconto;");
        printf ("\n<b> Em duas vezes (pre�o da etiqueta);");
        printf ("\n<c> De 3 at� 6 vezes com 2%% de juros ao m�s;");
        printf ("\n<d> Apresentar o total vendido e encerrar o programa.");
        printf("\nFa�a sua escolha: ");
        fflush(stdin);
        escolha = getchar();

        switch(escolha)
        {
        case 'A':
        case 'a':
            printf("Qual o valor da mercadoria? ");
            scanf("%f", &vm);
            vm=vm-vm*0.05;
            printf("Op��es de pagamento: %.2f\n", vm);
            printf("Venda confirmada?<S> ou <N> \n");
            fflush(stdin);
            a=getchar();
            if(a=='s'||a=='S')
            {
                total+=vm;
                continue;
            }
            continue;
        case 'b':
        case 'B':
            printf("Qual o valor da mercadoria? ");
            scanf("%f", &vm);
            printf("Op��es de pagamento : \n2 x %.2f\n",vm/2);
            printf("Venda confirmada?<S> ou <N> \n");
            fflush(stdin);
            a=getchar();
            if(a=='s'||a=='S')
            {
                total+=vm;
                continue;
            }
            continue;
        case 'c':
        case 'C':
            printf("Qual o valor da mercadoria? ");
            scanf("%f", &vm);
            vm3 = (vm*pow(1.03,3))/3;
            vm4 = (vm*pow(1.03,4))/4;
            vm5 = (vm*pow(1.03,5))/5;
            vm6 = (vm*pow(1.03,6))/6;
            printf("\nOp��es de pagamento <3>: 3 x %.2f = %.2f",vm3,vm3*3);
            printf("\nOp��es de pagamento <4>: 4 x %.2f = %.2f",vm4,vm4*4);
            printf("\nOp��es de pagamento <5>: 5 x %.2f = %.2f",vm5,vm5*5);
            printf("\nOp��es de pagamento <6>: 6 x %.2f = %.2f",vm6,vm6*6);
            printf("\nQual op��o de pagamento <3 a 6>? ");
            scanf("%f", &n);
            vm = n*((vm*pow(1.03,n))/n);
            printf("Venda confirmada?<S> ou <N> \n");
            fflush(stdin);
            a=getchar();
            if(a=='s'||a=='S')
            {
                total+=vm;
                continue;
            }
            continue;
        case 'd':
        case 'D':
            printf("*** DIA ENCERRADO ***\nTOTAL DE VENDAS DO DIA = %.2f",total);
            break;
        default:
            printf("A sua escolha n�o � uma op��o, por favor tente novamente! \n");
            printf("\n");
            printf("Recome�ando o programa...  \n");
            printf("\n");
            continue;
        }
        break;
    }
    return 0;
}
