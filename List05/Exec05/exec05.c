#include <stdio.h>

int summation(int n)
{
    int r = 1;
    int varInt = n; 
    int sum = 0;

    printf("\n=> !%d =", n);

    while (r <= n)
    {
        if (r != n)
        {
            printf(" %d +", r);
        }
        else
        {
            printf(" %d = ", r);
        }

        sum += varInt;
        varInt -= 1;
        r += 1;
    }

    return sum;
}

int main()
{
    int varInt = 0;
    int r = 0;

    printf("\nDigite um número: ");
    scanf(" %d", &varInt);

    r = summation(varInt);

    printf("%d\n\n", r);

    return 0;
}