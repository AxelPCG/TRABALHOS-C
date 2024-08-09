#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    int num,i=1;
    setlocale(LC_ALL,"");
    while(1)
    {
        printf("Digite um número inteiro para saber sua tabuada: ");
        if(scanf("%d", &num)==1)
        {
            break;
        }
        printf("\nErro ao ler o número!\nTente novamente!!\n");

    }
    while(1)
    {
        printf("%d\tx\t%d\t=\t%d\n",num,i,num*i);
        i++;
        if(i>9)
            break;
    }
    printf("Fim do programa\n");
    return 0;
}
