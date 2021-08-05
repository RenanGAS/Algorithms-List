#include <stdio.h>

void print_reverse(int n, int vet[n])
{
    printf("\n=> vet[%d]^-1 = {", n);

    for (int i = n - 1; i >= 0; i--)
    {
        if (i != 0)
        {
            printf(" %d,", vet[i]);
        }
        else
        {
            printf(" %d}\n\n", vet[i]);
        }
    }
}

int main()
{
    int n = 10;
    int vet[n];

    printf("\nDado o vetor, vet[%d] = {", n);

    for (int i = 0; i < n; i++)
    {
        vet[i] = i;
        if (i != n - 1)
        {
            printf(" %d,", vet[i]);
        }
        else
        {
            printf(" %d}\n", vet[i]);
        }
    }

    print_reverse(n, vet);

    return 0;
}