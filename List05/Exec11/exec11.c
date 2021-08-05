#include <stdio.h>

void print_even(int n, int vet[n])
{
    printf("\n=> vet_only_pairs[%d] = {", n);

    for (int i = 0; i < n; i++)
    {
        if (vet[i] % 2 == 0)
        {
            if (n % 2 == 0)
            {
                if (vet[i] == (n - 2))
                {
                    printf(" %d }\n\n", i);
                }
                else
                {
                    printf(" %d,", i);
                }
            }
            else
            {
                if (vet[i] == (n - 1))
                {
                    printf(" %d }\n\n", i);
                }
                else
                {
                    printf(" %d,", i);
                }
            }
        }
    }
}

int main()
{
    int n = 0;

    printf("\nDigite o tamanho do vetor: ");
    scanf(" %d", &n);

    int vet[n];

    printf("\nDado o vetor vet[%d] = {", n);

    for (int i = 0; i < n; i++)
    {
        if (i != n - 1)
        {
            printf(" %d,", i);
        }
        else
        {
            printf(" %d }\n", i);
        }

        vet[i] = i;
    }

    print_even(n, vet);

    return 0;
}