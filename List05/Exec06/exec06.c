#include <stdio.h>

int summation(int n)
{
    int r = 1;
    int varInt = n;
    int mult = 1;

    while (r <= n)
    {
        mult *= varInt;
        varInt -= 1;
        r += 1;
    }

    return mult;
}

int factorial_sum(int n)
{
    int fSum = 0;

    printf("\n=> %d =>", n);

    for (int i = 1; i <= n; i++)
    {
        if (i != n)
        {
            printf(" %d! +", i);
        }
        else
        {
            printf(" %d! = ", i);
        }

        fSum += summation(i);
    }

    return fSum;
}

int main()
{
    int n = 0;
    int fSum = 0;

    printf("\nDigite um número: ");
    scanf(" %d", &n);

    fSum = factorial_sum(n);

    printf("%d\n\n", fSum);

    return 0;
}