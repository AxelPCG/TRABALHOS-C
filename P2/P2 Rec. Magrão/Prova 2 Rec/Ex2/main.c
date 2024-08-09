/*********************************************************
* Autor: Marcelo Zampieri Pereira da Silva *
* Unidade curricular: Programação de Computadores I *
* Data: 29/04/2021 *
* Notas aluno*
*********************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Professor devido a constrições de tempo não consegui terminar o programa colocando um if para arredondamento de notas, no programa atual todas as notas são arredondadas para baixo.
char Conceito(char *,char *);

int main()
{
    char gabarito[] = "abccedbcea";
    setlocale(LC_CTYPE,"Portuguese");
    char vetor[10], nota;
    float notafinal;
    int i;

    for(i=0;i<10;i++)
    {

        printf("Entre com a resposta da questão %d: ",i+1);
        vetor[i] = getchar();
        fflush(stdin);
    }
    notafinal = Conceito(vetor, gabarito);
    printf ("A sua nota final foi igual a: %.2f", notafinal);
    return 0;
}

char Conceito(char *vetor, char *gabarito)
{
    int i, j;
    float acertos1, acertos2, notafinal;
    for(int i=0;i<=10;i+=2)
    {
       if (vetor[i] == gabarito[i])
       {
            acertos1++;
       }
    }
    for (j=1; j<=10; j+=2)
    {
       if (vetor[j] == gabarito[j])
       {
            acertos2++;
       }
    }
    notafinal= ((0.666*2*acertos1+0.666*acertos2)) ;
return notafinal;
}

