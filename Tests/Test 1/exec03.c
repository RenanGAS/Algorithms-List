#include <stdio.h>

int main()
{
    int varInt = 0;
    int sum = 0;
    int mult = 1;
    int stop = 1;

    printf("\nDigite um número natural: ");
    scanf(" %d", &varInt);

    while (stop)
    {
        if (varInt / 10 == 0)
        {
            sum += varInt % 10;
            mult *= varInt % 10;
            stop = 0;
        }
        else
        {
            sum += varInt % 10;
            mult *= varInt % 10;
            varInt = varInt / 10;
        }
    }

    printf("\n=> A soma de seus algarismos é igual a: %d\n", sum);
    printf("\n=> E a multiplicação deles é igual a: %d\n\n", mult);

    return 0;
}