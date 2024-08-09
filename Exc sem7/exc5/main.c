#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main()
{

    setlocale(LC_ALL, "");

    int a, b, soma;

    a = 0;
    b = 1;


    printf("\nSérie de Fibonacci:\n\n");
    printf("%d\n", b);

    for(int i = 0; i <= 15; i++)
    {

        soma = a + b;
        a = b;
        b = soma;

        printf("%d\n", soma);
    }
return 0;
}
