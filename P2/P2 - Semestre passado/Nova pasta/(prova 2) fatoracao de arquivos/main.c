#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void Printcon(unsigned short int *,int); //Impressão dos números com suas respectivas conversões para binário e hexa
void Fatora(unsigned short int,unsigned short int *);// separa em elementos de vetor a fatoração do numero por 2,3 e 5
int Exp(unsigned short int *, int);// Realiza a fatoração solicitada por "Fatora"

const char ARQUIVO[]="numeros.dat";

int main()
{
    setlocale(LC_CTYPE,"portuguese");

    FILE *arq;
    unsigned short int num[100],fat[4];
    int n,i;

    arq= fopen(ARQUIVO,"rb");
    if (arq==NULL)
        printf("Erro ao abrir o arquivo binário!");
    n=fread(num,sizeof(unsigned short int),100,arq);
    if (fclose(arq)!=0)
        printf("Erro ao fechar  arquivo!");

    Printcon(num,n);
    printf("\n\n");

    for (i=0; i<=n; i++)
    {
        Fatora(num[i],fat);
        printf("\n %-6d= (2^%d) x (3^%d) x (5^%d) x %d",num[i],fat[0],fat[1],fat[2],fat[3]);
    }

    return 0;
}

void Printcon(unsigned short int *v,int n)
{
    int i,j=0,b[30], num,k;

    printf("%-25s %-25s %-25s", "Decimal", "Hexadecimal", "Binário");
    for (i=0; i<n; i++)
    {
        num=v[i];
        j=0;

        while(num>0)
        {
            b[j]=num%2;
            num=num/2;
            j++;
        }
        if(b[j]==0)
            j--;

        printf("\n%-25d %-25x ",v[i],v[i]);
        for(k=j; k>=0; k--)
            printf("%d",b[k]);
    }
}

void Fatora(unsigned short int n,unsigned short int *f)
{
    f[0]=Exp(&n,2);
    f[1]=Exp(&n,3);
    f[2]=Exp(&n,5);
    f[3]=n;
}

int Exp(unsigned short int *n, int k)
{
    int m=0;

    while(*n%k==0)
    {
        *n=*n/k;
        m++;
    }

    return m;
}
