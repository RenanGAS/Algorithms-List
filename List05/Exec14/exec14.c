#include <stdio.h>

int find(int n, int vet[n], int elem)
{
    int r = -1;

    for (int i = 0; i < n; i++)
    {
        if (vet[i] == elem)
        {
            r = i;
        }
    }

    return r;
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

    int elem = 0;

    printf("\nDigite um elemento pertencente ao vetor: ");
    scanf(" %d", &elem);

    int r = 0;

    r = find(n, vet, elem);

    printf("\n=> %d\n\n", r);

    return 0;
}