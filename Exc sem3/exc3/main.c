#include <stdio.h>
#include <math.h>

int main()
{
    int min;
    float h, m;
    printf("Entre com os minutos a serem transformados em horas: ");
    scanf("%d",&min);
    h = min / 60;
    m = min % 60;
    printf("%.0d minutos minutos equivalem a %4.0f hora(s) e %2.0f minutos", min, h, m);
}
