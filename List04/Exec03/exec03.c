#include <stdio.h>

int main()
{
    int varInt = 0;

    printf("\nInforme o número: ");
    scanf(" %d", &varInt);

    for (int i = 1; i <= 10; i++)
    {
        printf("\n%d x %d = %d\n", varInt, i, varInt * i);
    }

    printf("\n");

    return 0;
}