#include <stdio.h>

int main()
{
    int varInt = 0;
    int f = 1;
    int s = 1;
    int varN = 0;
    int aux = 0;

    printf("\nDigite um número inteiro maior ou igual a 3: ");
    scanf(" %d", &varInt);

    int repeat = varInt - 4;

    if (varInt == 3)
    {
        varN = f + s;
    }
    else
    {
        s = 2;

        for (int i = 1; i <= repeat; i++)
        {
            aux = f;
            f = s;
            s += aux;
        }

        varN = f + s;
    }

    printf("\n=> Na série de Fibonacci, a posição \"%d\" equivale a: %d\n\n", varInt, varN);

    return 0;
}