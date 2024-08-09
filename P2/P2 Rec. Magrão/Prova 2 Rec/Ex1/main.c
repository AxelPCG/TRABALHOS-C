/*********************************************************
* Autor: Marcelo Zampieri Pereira da Silva *
* Unidade curricular: Programação de Computadores I *
* Data: 29/04/2021 *
* Programa le o arquivo marcelo.dat, ve quais elementos
* se encontram no quarto quadrante e salva sua resposta
* em um arquivo .txt, além de mostrar a resposta no
* simulador*
*********************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

struct ponto
{
    double x;
    float y;
};

int main()
{
    const char nomearq[]="marcelo.dat";
    const char nomearq2[]="resp.txt";
    setlocale(LC_CTYPE,"");
    struct ponto vetor[20];
    int n, i, posicao;
    FILE *fp,*fp2;

    fp=fopen(nomearq,"rb");
    if(fp==NULL)
    {
        printf("Erro ao abrir arquivo 1.");
        exit(1);
    }
    fp2=fopen(nomearq2,"w+");
    if(fp2==NULL)
    {
        printf("Erro ao abrir arquivo 2.");
        exit(1);
    }
    n = fread(vetor, sizeof(struct ponto), 20, fp);
    for(i=0; i<n; i++)
    {
            printf("O elemento %d vale {%.2f, %.2f}.\n", i+1, vetor[i].x, vetor[i].y);
    }
    for (i=0; i<n;i++)
    {
        if (vetor[i].x > 0 && vetor[i].y <0)
        {
        fprintf (fp2,"Os numeros no quarto quadrante são (%.2f, %.2f)\n", vetor[i].x, vetor[i].y);
        printf ("Os numeros no quarto quadrante são (%.2f, %.2f)\n", vetor[i].x, vetor[i].y);
        }
    }
    return 0;
}
