#include <stdio.h>

int is_perfect_number(int n)
{
    int r = 0;
    int sum = 0;

    for (int i = 1; i < n; i++)
    {
        if (n % i == 0)
        {
            sum += i;
        }
    }

    if (sum == n)
    {
        r = 1;
    }

    return r;
}

int main()
{
    int n = 0;
    int r = 0;

    printf("\nDigite um número: ");
    scanf(" %d", &n);

    r = is_perfect_number(n);

    printf("\n=> %d\n\n", r);

    return 0;
}