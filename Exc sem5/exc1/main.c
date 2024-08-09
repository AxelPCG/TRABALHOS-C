#include <stdio.h>
#include <stdlib.h>

int main()
{
    char sexo;
    int idade, tempo;
    printf("Entre com sua idade: ");
    scanf("%d", &idade);
    fflush(stdin);
    printf("Entre com seu sexo\n <m> para masculino\n <f> para femino\n : ");
    scanf("%c", &sexo);
    if(idade<30 && sexo=='m')
        tempo= 55;
    else if(idade<30 && sexo=='f')
        tempo=45;
    else if(idade>=30 && sexo=='m')
        tempo= 40;
    else
        tempo= 35;
    printf("Tempo de treinamento = %d minutos", tempo);
    return 0;
}
