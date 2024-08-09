#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>


const char ARQUIVO[]= "numeros.txt";

int main()
{
    setlocale(LC_CTYPE,"portuguese");

    FILE *tarq, *barq;
    double num[100], sum=0, n[100];
    char nomebin[20];
    int i=0, m,k;

    printf("Informe do nome do arquivo binário: ");
    scanf("%s", nomebin);
    strcat(nomebin,".dat");

    tarq = fopen(ARQUIVO, "a+");
    if (tarq == NULL)
    {
        printf("Erro ao abrir o arquivo!\n");
        exit(1);
    }

    while (fscanf(tarq, "%lf ",&num[i])!= EOF)
    {
        sum = sum + num[i];
        i++;
    }
    fprintf(tarq, "\n%.1f", sum/i);
    if (fclose(tarq)!=0)
        printf("Erro ao fechar o arquivo de texto!\n");

    barq = fopen(nomebin, "wb");
    if (barq == NULL)
    {
        printf("Erro!\n");
        exit(1);
    }

    m=fwrite(num,sizeof(double),i,barq);

    if (m!=i)
        printf("Erro na escrita!\n");

    if (fclose(barq)!=0)
        printf("Erro ao fechar o arquivo binário!\n");

    barq = fopen(nomebin, "rb");
    if (barq == NULL)
    {
        printf("Erro!\n");
        exit(1);
    }


    k=fread(n,sizeof(double),100,barq);

    for (i=0; i<k; i++)
        printf("\n n[%d] > %lf", i, n[i]);

    if (fclose(barq)!=0)
        printf("Erro ao fechar o arquivo binário!\n");

    return 0;
}
