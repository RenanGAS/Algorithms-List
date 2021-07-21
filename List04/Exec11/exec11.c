#include <stdio.h>

int main()
{
    int varInt = 0;
    int varIntNext = 0;
    int sum = 0;

    printf("\nDigite um número inteiro: ");
    scanf(" %d", &varInt);

    for (int i = 1; i <= varInt; i++)
    {
        if (i == 1)
        {
            sum += i;
        }
        else
        {
            sum += (i-1) + i;
        }
        
    }

    printf("\n=> %d^2 = %d\n\n", varInt, sum);

    return 0;
}