#include <stdio.h>

void find_min_max(int n, int vet[n])
{
    int min = vet[0];
    int max = vet[0];

    for (int i = 0; i < n; i++)
    {
        if (max < vet[i])
        {
            max = vet[i];
        }
        else if (min > vet[i])
        {
            min = vet[i];
        }
    }

    printf("\n=> Maior elemento: %d, Menor elemento: %d\n\n", max, min);
}

int main()
{
    int n = 0;

    printf("\nDigite o tamanho do vetor: ");
    scanf(" %d", &n);

    int vet[n];

    printf("\nDigite %d elementos para o vetor:\n", n);

    for (int i = 0; i < n; i++)
    {
        printf("\n> ");
        scanf(" %d", &vet[i]);
    }

    printf("\nDado o vetor vet[%d] = {", n);

    for (int i = 0; i < n; i++)
    {
        if (i != n - 1)
        {
            printf(" %d,", vet[i]);
        }
        else
        {
            printf(" %d }\n", vet[i]);
        }
    }

    find_min_max(n, vet);

    return 0;
}