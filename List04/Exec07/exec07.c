#include <stdio.h>

int main()
{
    int varInt = 0;
    int mult = 1;

    printf("\nInforme o número: ");
    scanf(" %d", &varInt);
    printf("\n");

    if (varInt == 0 || varInt == 1)
    {
        printf("%d! = 1\n\n", varInt);
    }
    else
    {
        printf("%d! = ", varInt);
        for (int i = 1; i <= varInt; i++)
        {
            if (i != varInt)
            {
                mult *= i;
                printf("%d x ", i);
            }
            else
            {
                mult *= i;
                printf("%d = %d\n\n", i, mult);
            }
        }
    }

    return 0;
}