#include <stdio.h>

int main()
{
    int varInt = 0;
    int verif = 1;
    int cont = 0;
    int sum = 0;

    printf("\nInforme os números:\n");

    while (verif)
    {
        printf("\n> ");
        scanf(" %d", &varInt);

        if (varInt != 0)
        {
            sum += varInt;
            cont += 1;
        }
        else
        {
            if (cont == 0)
            {
                printf("\n");
            }
            else
            {
                printf("\nSoma: %d\nMedia: %.2f\n\n", sum, (float)sum / cont);
            }

            verif = 0;
        }
    }

    return 0;
}