#include <stdio.h>

void replace_all(int n, int vet[n], int elem)
{
    printf("\n=> vet_replaced[%d] = {", n);

    for (int i = 0; i < n; i++)
    {
        if (vet[i] == elem)
        {
            vet[i] = -1;
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

    int elem;

    printf("\nDigite um elemento para ser trocado por -1: ");
    scanf(" %d", &elem);

    replace_all(n, vet, elem);

    return 0;
}