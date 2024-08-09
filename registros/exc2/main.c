#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

struct lista_acad
{
    char nome[20];
    char sexo;
    short int unsigned idade;
    float p,h,imc;
};
int main()
{
    setlocale(LC_ALL,"");
    struct lista_acad alunos[100];
    int i=0;
    char a;

    do
    {
        printf("Nome do aluno: ");
        gets(alunos[i].nome);
        printf("Sexo : <f> ou <m> ");
        fflush(stdin);
        alunos[i].sexo=getchar();
        printf("Idade : ");
        scanf("%hd",&alunos[i].idade);
        printf("Peso em kilos: ");
        scanf("%f",&alunos[i].p);
        printf("Altura em metros: ");
        scanf("%f", &alunos[i].h);
        alunos[i].imc=alunos[i].p/(alunos[i].h*alunos[i].h);
        printf("Deseja inserir mais alunos? <s> ||<n>");
        fflush(stdin);
        a=getchar();
        i++;
        if(a=='n'||a=='N')
            break;
        fflush(stdin);


    }
    while(i<100);


    for(int n=0; n<i; n++)
    {
        if(alunos[n].imc>30)
        {
            printf("%s Obesidade\n",alunos[n].nome);
        }
        else if(alunos[n].imc<18.5)
            printf("%s Baixo peso\n", alunos[n].nome);
    }

    return 0;
}



