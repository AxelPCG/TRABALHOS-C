#include <stdio.h>
#include <stdlib.h>

int main()
{
    int p1, p2;
    float ent, vt, vt2;
    printf("Entre com o valor do produto: ");
    scanf("%f", &vt);
    p1=vt/3;
    p2=vt/3;
    vt2=vt-(3*p1);
    ent=p1+vt2;
    printf("p1= %d \np2= %d \nentrada= %.2f", p1,p2,ent);
    return 0;
}
