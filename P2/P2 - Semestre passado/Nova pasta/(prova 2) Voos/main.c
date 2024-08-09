#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#include <string.h>

struct voo
{
    char origem[4]; // aeroporto de sa�da
    char destino[4]; // aeroporto de destino
    int n_voo; // prefixo do v�o
    float saida; // hor�rio de sa�da do v�o
    float chegada; // hor�rio de chegada do v�o
};
const char ARQUIVO[]="voos.dat";
const char ARQUIVOt[]="voos.txt";

void Dur(struct voo);
void Swapch(struct voo *, float);
void Destino(struct voo *, char *);


int main()
{
    setlocale(LC_CTYPE,"portuguese");

    struct voo voos[20];

    FILE *fp;
    int n,i;
    float a;
    char dest[4];

    fp=fopen(ARQUIVO,"rb");
    if (fp==NULL)
    {
        printf("Erro ao abrir arquivo!");
        exit(1);
    }
    n=fread(voos,sizeof(struct voo),20,fp);
    if (fclose(fp)!=0)
        printf("Erro ao fechar o arquivo!");

    fp=fopen(ARQUIVOt,"w");
    if (fp==NULL)
    {
        printf("Erro ao abrir arquivo!");
        exit(1);
    }
    fprintf(fp,"%-10s %-10s %-10s %-10s %-10s %-10s","Op��o","Origem","Destino","N� Voo","Sa�da","Chegada");
    for (i=0; i<n; i++)
        fprintf(fp,"\n  %-8d %-10s %-10s %-10d %-10.2f %-10.2f",i,voos[i].origem,voos[i].destino,voos[i].n_voo,voos[i].saida,voos[i].chegada);
    if (fclose(fp)!=0)
        printf("Erro ao fechar o arquivo!");

    fprintf(stdout,"%-10s %-10s %-10s %-10s %-10s %-10s","Op��o","Origem","Destino","N� Voo","Sa�da","Chegada");
    for (i=0; i<n; i++)
        fprintf(stdout,"\n  %-8d %-10s %-10s %-10d %-10.2f %-10.2f",i,voos[i].origem,voos[i].destino,voos[i].n_voo,voos[i].saida,voos[i].chegada);


    printf("\n\n");
    printf("Informe a op��o do voo que deseja verificar a dura��o: ");
    scanf("%d",&i);
    Dur(voos[i]);

    printf("\n\nSelecione a op��o do voo que deseja mudar o hor�rio de chegada: ");
    scanf("%d",&i);
    fflush(stdin);
    printf("\nInforme o novo hor�rio de chegada de '%s' para '%s': ",voos[i].origem,voos[i].destino);
    scanf("%f",&a);
    fflush(stdin);
    Swapch(&voos[i],a);

    printf("\nInforme o destino do voo que deseja verificar as informa��es:");
    scanf("%s",dest);
    fflush(stdin);
    Destino(voos,dest);

    return 0;
}

void Dur(struct voo v)
{
    float h,m;

    h=floor(v.chegada)-floor(v.saida);
    m=(v.chegada-floor(v.chegada))-(v.saida-floor(v.saida));
    if(h<0)
        h=h+24;
    if (m<0)
    {
        m=m+0.60;
        h--;
    }
    h=m+h;
    printf("\nA Dura��o de '%s' at� '%s' � : %.2f horas", v.origem,v.destino, h);

}

void Swapch(struct voo *v, float h)
{
    v->chegada=h;
}

void Destino(struct voo *v, char *d)
{
    int i=0;

    while(strcmp((v+i)->destino,d)!=0)
        i++;
    printf("\n\n%-10s %-10s %-10s %-10s %-10s","Origem","Destino","N� Voo","Sa�da","Chegada");
    printf("\n%-10s %-10s %-10d %-10.2f %-10.2f\n\n",(v+i)->origem,(v+i)->destino,(v+i)->n_voo,(v+i)->saida,(v+i)->chegada);
}
