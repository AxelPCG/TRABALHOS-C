#include <stdio.h>
#include <math.h>

int main()
{
    float h, m, min;
    printf("Entre com as horas (x horas e y minutos) a serem transformadas em minutos: ");
    scanf("%f %f",&h,&m);
    min = h * 60 + m;
    printf("%4.0f hora(s) e %2.0f minutos equivalem a %4.2f minutos", h, m, min);
}
