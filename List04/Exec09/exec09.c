#include <stdio.h>

int main()
{
    int b = 0;
    int s = 0;
    int varInt = 0;
    int verif = 1;

    printf("\nInforme os números:\n");

    while (verif)
    {
        printf("\n> ");
        scanf(" %d", &varInt);

        if (varInt != 0)
        {
            if (varInt > b)
            {
                b = varInt;
            }

            if (s == 0)
            {
                s = varInt;
            }
            else
            {
                if (varInt < s)
                {
                    s = varInt;
                }
            }
        }
        else
        {
            printf("\nMaior: %d\nMenor: %d\n\n", b, s);
            verif = 0;
        }
    }

    return 0;
}