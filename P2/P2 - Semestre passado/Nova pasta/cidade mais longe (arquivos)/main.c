#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

struct cidades
{
    char nome[30];
    float distancia;
};

const char ARQUIVO[]= "cities.dat";


int main()
{
    setlocale(LC_CTYPE,"portuguese");

    FILE *arq;
    struct cidades city[100], longe;
    int i,n;


    arq= fopen(ARQUIVO,"rb");
    if (arq == NULL)
    {
        printf("Erro ao abrir o arquivo!\n");
        exit(1);
    }

    n=fread(city,sizeof(struct cidades),100,arq);

    printf("Cidades:\n");
    for (i=0; i<n; i++)
        printf("%s %.2f km\n", city[i].nome, city[i].distancia);

    longe=city[0];

    printf("\n\nCidade mais longe de florianópolis:  ");

    for (i=1; i<n; i++)
        if (longe.distancia<city[i].distancia)
            longe=city[i];

    printf("%s %.2f km\n\n", longe.nome, longe.distancia);

    fclose(arq);


    return 0;
}
