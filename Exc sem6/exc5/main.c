#include <stdio.h>
#include <locale.h>
#include <io.h>
#include <fcntl.h>
#define _O_U16TEXT 0x20000

int main()
{
    setlocale(LC_ALL,"");
    float r,req;
    int n,i=2;
    char a;
    do
    {
        printf("Entre com o número de resistores: ");
        scanf("%d", &n);
        printf("\nEntre com o valor do 1 resistor: ");
        scanf("%f", &req);
        while(n>1)
        {
            printf("Entre com o valor do %d resistor: ", i);
            scanf("%f",&r );
            i++;
            req=(req*r)/(req+r);
            n--;
        }
        i=2;
        _setmode(_fileno(stdout), _O_U16TEXT);
        wprintf(L"O resultado \u00E9 : %.2f  \u03a9\n",req);
        _setmode(_fileno(stdout), _O_TEXT);;
        while(1)
        {
            printf("\nVoce deseja sair? <s> || <n> : ");
            fflush(stdin);
            a=getchar();
            if(a=='s'||a=='S'||a=='n'||a=='N')
                break;
            printf("Desculpe não entendi!\nTente novamente!!");
        }
    }
    while(a!='s'&&a!='S');
    return 0;
}
