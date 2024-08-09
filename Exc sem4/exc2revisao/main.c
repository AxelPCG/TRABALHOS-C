#include <stdio.h>
#include <stdlib.h>

int main()
{

    float m_a, m_h,v1, v2, v3;
    printf("Entre com o primeiro valor: ");
    scanf("%f",&v1);
    printf("\nEntre com o segundo valor: ");
    scanf("%f",&v2);
    printf("\nEntre com o terceiro valor: ");
    scanf("%f",&v3);
    m_a=(v1+v2+v3)/3;
    m_h= 3/((1./v1)+(1./v2)+(1./v3));
    printf("media aritmetica= %.2f \nmedia harmonica= %.2f", m_a, m_h);
    return 0;
}
