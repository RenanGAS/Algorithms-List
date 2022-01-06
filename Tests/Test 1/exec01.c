#include <stdio.h>

int main()
{
    char varChar = ' ';

    printf("\nDigite um caracter: ");
    scanf(" %c", &varChar);

    if (varChar % 2 == 0)
    {
        printf("\n=> \"%c\" é representado pelo número %d, que é par\n\n", varChar, varChar);
    }
    else
    {
        printf("\n=> \"%c\" é representado pelo número %d, que é ímpar\n\n", varChar, varChar);
    }

    return 0;
}