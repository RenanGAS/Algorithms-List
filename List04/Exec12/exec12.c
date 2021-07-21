#include <stdio.h>

int main()
{
    int varInt = 0;
    int verif = 1;

    printf("\nInforme o número: ");
    scanf(" %d", &varInt);

    for (int i = 2; i < 10; i++)
    {
        if ((varInt % i == 0) && (varInt != i))
        {
            verif = 0;
        }
    }

    if (verif == 1)
    {
        printf("\nResposta: É primo\n\n");
    }
    else
    {
        printf("\nResposta: Não é primo\n\n");
    }

    return 0;
}