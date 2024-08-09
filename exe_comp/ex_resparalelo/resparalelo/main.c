#include <stdio.h>
#include <locale.h>

int main()
{
    float r, req=0, resis;
    char resp,i;
    setlocale(LC_CTYPE, "");
    do
    {
        printf ("Informe o número de resistores: \n");
        scanf("%f",&resis);
        for(i=1; i<=resis;i++)
        {
            printf("Entre com o valor do resistor %d: \n",i);
            scanf("%f", &r);
            req = req + 1/r; // acumula os inversos
        }
        req = 1/req; // inverte para obter a req
        printf("O valor da Resistencia equivalente é %.2f: \n", req);
        req = 0; //zera a acumulação
        fflush(stdin);
        printf("Deseja sair? <S>/<N>");
        resp=getchar();
    }while(resp!='S' && resp!='s');
    return 0;
}
