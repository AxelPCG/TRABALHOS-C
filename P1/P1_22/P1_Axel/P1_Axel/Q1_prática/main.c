/**********************************************************
* Autor: Axel P. C. Gonzaga                               *
* Unidade curricular: Programa��o de Computadores I       *
* Data: 25/05/2022                                        *
* Quest�o 1: Pesquisa de habitantes de uma regi�o         *
***********************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"");
    int h, f, i, j, x = 0, y = 0, idadef, idadeh,t=0;

    printf("Entre com o n�mero de habitantes homens: ");    //Escolha valores menores que 10 para n�o precisar descrever a idade de muitos
    scanf("%d", &h);
    printf("Entre com o n�mero de habitantes mulheres: ");  //Escolha valores menores que 10 para n�o precisar descrever a idade de muitos
    scanf("%d", &f);
    for (i=0; i<h; i++)
    {
        printf("Entre com a idade dos homens: ");
        scanf("%d", &idadeh);
        if (idadeh>=30)
        {
            t=t+1;
        }
    }
    for (j=0; j<f; j++)
    {
        printf("Entre com a idade das mulheres: ");
        scanf("%d", &idadef);
        for (x=0; idadef>=30; x++)
        {
            y=y+1;
        }
    }
    printf("N�mero de homens com mais de 30 anos �: ",t);
    printf("N�mero de mulheres com mais de 30 anos �: ",y);

    return 0;
}
