#include <stdio.h>

void set_positive(int n, int vet[n])
{
    printf("\n=> vet_all_positive[%d] = {", n);

    for (int i = 0; i < n; i++)
    {
        if (vet[i] < 0)
        {
            vet[i] = -1 * vet[i];
        }

        if (i == (n - 1))
        {
            printf(" %d }\n\n", vet[i]);
        }
        else
        {
            printf(" %d,", vet[i]);
        }
    }
}

int main()
{
    int n = 0;

    printf("\nDigite o tamanho do vetor: ");
    scanf(" %d", &n);

    int vet[n];

    printf("\nDigite %d elementos(positivos e negativos) para o vetor:\n", n);

    for (int i = 0; i < n; i++)
    {
        printf("\n> ");
        scanf(" %d", &vet[i]);
    }

    printf("\nDado o vetor vet[%d] = {", n);

    for (int i = 0; i < n; i++)
    {
        if (vet[i] != vet[n-1])
        {
            printf(" %d,", vet[i]);
        }
        else
        {
            printf(" %d }\n", vet[i]);
        }
    }

    set_positive(n, vet);

    return 0;
}