/**********************************************************
* Autor: Axel P. C. Gonzaga                               *
* Unidade curricular: Programa��o de Computadores I       *
* Data: 21/09/2021                                        *
* Quest�o 3: Equival�ncias Resistivas                     *
***********************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void Req(float *, char, int);

int main()
{
    setlocale(LC_ALL,"");
    int n, i, k;
    char escolha;
    float res[n];


    printf("Digite o n�mero de resistores na ordem <1,2..>:\n");
    scanf("%d", &n);
    k=n;
    fflush(stdin);
    for(i=0; i<k; i++)
    {
        printf("Digite os valores dos resistores na ordem desejada:\n");
        scanf("%f", &res[i]);
        fflush(stdin);
    }
    printf("Digite:\n's' se a associa��o desejada for s�rie;\n'p' se a associa��o desejada for paralela;\n'd' se for desejada uma convers�o Y - X;\n'e' se for desejada uma convers�o X � Y.\n");
    scanf("%s", &escolha);
    fflush(stdin);

    return 0;
}

void Req(float *res, char escolha, int k)
{
    int i;
    float req;
    if (escolha=='s')
    {
        for(i=0; i<k; i++)
            req+=res[i];
        return req;
    }
    if (escolha=='p')
    {
        for(i=0; i<k; i++)
            req+=1/res[i];
        return req;
    }
    if (escolha=='d')
    {
        //sla como fazer
    }
    if (escolha=='e')
    {
        //sla como fazer
    }
}
