#include <stdio.h>

int main()
{
    int varInt = 0;
    int cont = 0;

    printf("\nInforme o número: ");
    scanf(" %d", &varInt);
    printf("\n");

    if (varInt == 0)
    {
        printf("%d = %d\n\n", varInt, varInt);
    }

    for (int i = 1; i <= varInt; i++)
    {
        if (i != varInt)
        {
            cont += i;
            printf("%d + ", i);
        } else
        {
            cont += i;
            printf("%d = %d\n\n", i, cont);
        }
    }

    return 0;
}