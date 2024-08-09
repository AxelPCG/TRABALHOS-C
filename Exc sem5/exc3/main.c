#include <stdio.h>
#include <stdlib.h>

int main()
{
    char sexo;
    float h, p;
    printf("Entre com seu sexo <m> masculino ou <f> feminino: ");
    sexo=getchar();
    printf("\nEntre com sua altura em metros: ");
    scanf("%f", &h);
    p= (sexo=='m')?((72.7*h)-58 ):((62.1*h)-44.7);
    printf("Seu peso ideal eh %.2f quilos", p);

    return 0;
}
