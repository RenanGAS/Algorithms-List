#include <stdio.h>

int is_prime(int n)
{
    int r = 1;

    for (int i = 2; i < 10; i++)
    {
        if (n == i)
        {
            for (int j = 2; j < 10; j++)
            {
                if (n != i)
                {
                    if (n % i == 0)
                    {
                        r = 0;
                    }
                }
            }
        }
        else
        {
            if (n % i == 0)
            {
                r = 0;
            }
        }
    }

    return r;
}

int main()
{
    int varInt = 0;

    printf("\nDigite um número: ");
    scanf(" %d", &varInt);

    printf("\n=> %d\n\n", is_prime(varInt));

    return 0;
}