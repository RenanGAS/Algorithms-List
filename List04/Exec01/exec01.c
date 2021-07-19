#include <stdio.h>

int main()
{
    int varInt = 0;
    
    printf("\nInforme o número de linhas: ");
    scanf(" %d", &varInt);

    for (int i = 1; i <= varInt; i++)
    {
        printf("\nLinha %d\n", i);
    }

    printf("\n");

    return 0;
}