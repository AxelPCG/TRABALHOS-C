#include <stdio.h>
#include <stdlib.h>

int main()
{
    int j=1;
    char c='A';
    for(int i=5; i>=1; i--)
    {

        for(int j=1; j<=i; j++)
        {
            printf("%d%c",j,c);
            c++;
        }
        printf("\n");
        j=1;
        c='A';

    }

    return 0;
}
