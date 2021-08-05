#include <stdio.h>

int sum_values(int n, int vet[n])
{
    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        sum += vet[i];
    }

    sum = sum/n;

    return sum;
}

int main()
{
    int sum = 0;
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

    sum = sum_values(n, vet);

    printf("\n=> Média aritimética simples do elementos: %d\n\n", sum);

    return 0;
}