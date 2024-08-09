#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

const char ARQUIVO[]="D:\\Eletrônica\\Programação de Computadores I\\Exercícios\\C\\Media arquivo de texto (arquivos)\\numeros.dat";

int main()
{
    setlocale(LC_CTYPE,"portuguese");
    FILE *barq;
    double num[100], sum=0;
    int n,i;

    barq=fopen(ARQUIVO,"rb");
    if (barq == NULL)
    {
        printf("Erro!\n");
        exit(1);
    }

    n=fread(num,sizeof(double),100,barq);

    for(i=0; i<n; i++)
        sum= sum+(1/num[i]);

    printf("Media harmônica do arquivo: %lf", n/sum);

    return 0;
}
