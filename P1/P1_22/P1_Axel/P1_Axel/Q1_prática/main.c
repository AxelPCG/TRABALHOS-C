/**********************************************************
* Autor: Axel P. C. Gonzaga                               *
* Unidade curricular: Programação de Computadores I       *
* Data: 25/05/2022                                        *
* Questão 1: Pesquisa de habitantes de uma região         *
***********************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"");
    int h, f, i, j, x = 0, y = 0, idadef, idadeh,t=0;

    printf("Entre com o número de habitantes homens: ");    //Escolha valores menores que 10 para não precisar descrever a idade de muitos
    scanf("%d", &h);
    printf("Entre com o número de habitantes mulheres: ");  //Escolha valores menores que 10 para não precisar descrever a idade de muitos
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
    printf("Número de homens com mais de 30 anos é: ",t);
    printf("Número de mulheres com mais de 30 anos é: ",y);

    return 0;
}
