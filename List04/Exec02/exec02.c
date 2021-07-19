#include <stdio.h>

int main()
{
    int varInt = 0;
    printf("\nInforme o número de linhas: ");
    scanf(" %d", &varInt);

    for (int i = varInt; i > 0; i--)
    {
        printf("\nLinha %d\n", i);
    }

    printf("\n");

    return 0;
}