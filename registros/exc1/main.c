#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

struct lista_alunos{
    char nome[20];
    int mat;
    float n1,n2,n3,media;

    };
int main()
{
    setlocale(LC_ALL,"");
    struct lista_alunos turma[100];
    int i;
    char a;
    float temp;
    for(i=0;i<100;i++)
    {
        printf("Nome do aluno: ");
        gets(turma[i].nome);
        printf("Entre com a matrícula do aluno: ");
        scanf("%d",&turma[i].mat);
        printf("Entre com as três notas (n1 n2 n3): ");
        scanf("%f %f %f",&turma[i].n1,&turma[i].n2,&turma[i].n3);
        turma[i].media=(turma[i].n1 +turma[i].n2 + turma[i].n3)/3;
        printf("Deseja inserir mais alunos ? <s> || <n>: ");
        fflush(stdin);
        a=getchar();
        if(a=='n'||a=='N')
            break;
        fflush(stdin);


    }
    printf("Lista de aprovados:\n");
    for(int n=1;n<i;n++)
        for(int k=0;k<n;k++)
    {
        if(turma[k].media<turma[n].media)
            {
                temp=turma[n].media;
                turma[n].media=turma[k].media;
                turma[k].media=temp;
            }
    }
    for(int n=0;n<i;n++)
    {
        if(turma[n].media>=6)
        printf("aluno : %s nota= %.2f\n",turma[n].nome,turma[n].media);
    }


    return 0;
}
