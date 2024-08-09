#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <complex.h>
#include <locale.h>

int main()
{
    double a, b, c;
    double complex r1,r2;
    setlocale(LC_CTYPE, "");

    printf("Entre com  uma equação do segundo grau: (a*x^2+ bx + c)\n a= ");
    scanf("%lf", &a);
    printf("\n b= ");
    scanf("%lf", &b);
    printf("\n c= ");
    scanf("%lf", &c);
    r1= (-b + csqrt(b*b-4*a*c))/(2*a);
    r2= (-b - csqrt(b*b-4*a*c))/(2*a);
    printf("r1= %.2f +j%.2f ", creal(r1), cimag(r1));
    printf("\nr2= %.2f +j%.2f ", creal(r2), cimag(r2));

    return 0;
}
