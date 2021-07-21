#include <stdio.h>

int digits(int a)
{
    int result = a / 10;
    int countDigits = 0;

    if (result == 0)
    {
        countDigits = 1;
    }
    else
    {
        countDigits = 2;
        while (result != 0)
        {
            result = result / 10;
            if (result != 0)
            {
                countDigits += 1;
            }
        }
    }

    return countDigits;
}

int main()
{
    int varInt = 0;
    int restInt = 0;
    int ndigits = 0;
    int repeat = 0;

    printf("\nDigite um número: ");
    scanf(" %d", &varInt);

    ndigits = digits(varInt);
    repeat = ndigits - 1;

    printf("\nDígito(s) = [ ");

    if (repeat != 0)
    {
        while (repeat)
        {
            int copy = varInt;

            for (int i = 1; i <= repeat; i++)
            {
                copy = copy / 10;
            }

            if (copy / 10 == 0)
            {
                printf("%d, ", copy);
            }
            else
            {
                printf("%d, ", copy % 10);
            }

            repeat--;
        }
        printf("%d ]\n\n", varInt % 10);
    }
    else
    {
        printf("%d ]\n\n", varInt);
    }

    return 0;
}