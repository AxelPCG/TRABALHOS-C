#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"");
    int n, i=1;
    while(1)
    {
        printf("\nDefina um numero ímpar: ");
        scanf("%d", &n);
        if(n%2!=0)
            break;
        fflush(stdin);
        printf("Erro ao ler o número, o número não é ímpar!\n\n Tente novamente!!");
    }

    while(i<=n)
    {
        if(i%2!=0)
            printf("%d\n",i);
        i++;
    }
    while(i>=1)
    {
        i--;
        if(i%2!=0&&i!=n)
            printf("%d\n",i);

    }
    return 0;
}
