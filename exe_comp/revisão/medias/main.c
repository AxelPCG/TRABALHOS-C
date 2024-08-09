#include <stdio.h>
#include <math.h>

int main()
{
    float media_aritmetica, media_harmonica, a, b, c;
    printf("Digite os 3 valores desejados para calculo de media aritmetica e hamonica: ");
    scanf("%f %f %f", &a, &b, &c);
    media_aritmetica= (a+b+c)/3;
    media_harmonica= 3/(1/a + 1/b +1/c);
    printf("Media aritmetica: %.2f\nMedia harmonica: %.2f", media_aritmetica, media_harmonica);
    return 0;
}
