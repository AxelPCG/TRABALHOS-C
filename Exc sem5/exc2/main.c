#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"");
    int  mes,dia,ano;
    printf("Entre com o número do mês: ");
    scanf("%d", &mes);
    if (mes== 1|| mes==3 || mes== 5||mes== 7||mes== 8||mes== 10||mes== 12)
    {
        dia=31;
    }
    else if(mes==4 || mes==6 || mes==9 || mes==11)
        dia=30;
    else
    {
        printf("Entre com o ano: ");
        scanf("%d", &ano);
        if((ano%4==0&&ano%100!=0) || ano%400==0)
            dia=29;

        else
            dia=28;
    }
    printf("O mes %d tem %d dias", mes, dia);
    return 0;
}
