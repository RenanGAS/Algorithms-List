#include <stdio.h>

void read_vector(int n, int vet[n])
{
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

    printf("\n=> Temos que em ordem reversa fica:\n\n   => vet[%d]^-1 = {", n);

    for (int i = n-1; i >= 0; i--)
    {
        if (i != 0)
        {
            printf(" %d,", vet[i]);
        }
        else
        {
            printf(" %d }\n\n", vet[i]);
        }
    }
}

int main()
{
    int n;

    printf("\nDigite o tamanho do vetor: ");
    scanf(" %d", &n);

    int vet[n];

    read_vector(n, vet);

    return 0;
}