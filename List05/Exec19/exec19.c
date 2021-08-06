#include <stdio.h>

void defrag(int n, int vet[n])
{
    int aux;

    for (int i = 0; i < n; i++)
    {
        if (vet[i] == -1)
        {
            if (i != n - 1)
            {
                for (int j = i + 1; j < n; j++)
                {
                    if (vet[j] != -1)
                    {
                        aux = vet[j];
                        vet[j] = vet[i];
                        vet[i] = aux;

                        break;
                    }
                }
            }
        }
    }

    printf("\n=> Reorganizando os elementos (colocando os inválidos à esquerda), temos vet[%d] = {", n);

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

    defrag(n, vet);

    return 0;
}