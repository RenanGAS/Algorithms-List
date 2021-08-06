#include <stdio.h>

void reverse(int n, int vet[n])
{
    int aux;
    int prll;
    int dif;

    for (int i = 0; i < n; i++)
    {
        prll = n - (i + 1);

        aux = vet[prll];
        vet[prll] = vet[i];
        vet[i] = aux;

        dif = prll - i;

        if (n % 2 != 0)
        {
            if (dif == 0)
            {
                break;
            }
        }
        else
        {
            if (dif == 1)
            {
                break;
            }
            
        }
    }

    printf("\n=> Reescrevendo-o, invertendo as posições dos elementos, temos vet[%d] = {", n);

    for (int i = 0; i < n; i++)
    {
        if (i != n - 1)
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

    reverse(n, vet);

    return 0;
}