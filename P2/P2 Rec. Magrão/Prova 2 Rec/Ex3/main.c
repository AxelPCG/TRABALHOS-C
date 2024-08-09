/*********************************************************
* Autor: Marcelo Zampieri Pereira da Silva *
* Unidade curricular: Programação de Computadores I *
* Data: 29/04/2021 *
* Obtendo o resto da função, dado o x escolhido pelo
* usuario*
*********************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "Portuguese");
    int fim=1999, x;

        printf ("Entre com o valor que deseja utilizar como x:");
        scanf ("%d", &x);
        if (x<2 || x>9)
            printf ("Tente novamente!\n");
        else
        {
            printf ("Os números que possuem o mesmo resto de x entre 1000 e 1999 são:\n");
            for (int comeco=1000; comeco<fim; comeco++)
            {
                if (comeco%11==x)
                    printf("%d\n", comeco);
            }
        }
return 0;
}
