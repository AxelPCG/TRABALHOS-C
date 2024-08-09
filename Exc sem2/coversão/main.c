#include <stdio.h>
#include <math.h>

int main()
{
    float x, y, z, theta;
    printf ("De o valor de x e y: \n");
    scanf ("%f %f", &x, &y);
    z = sqrt(x*x+y*y);
    theta = atan2(y,x)*180/M_PI;            //arctan(y/x) * 180/pi para tranformar em graus
    printf ("Resposta: %2f | %2f",z,theta);
    return 0;
}
