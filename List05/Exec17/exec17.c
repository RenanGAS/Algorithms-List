#include <stdio.h>

int main()
{
    int vet[] = {};
    int enter = 1;
    int n = 0;

    printf("\nDigite valores para um vetor:\n");

    while (enter != 0)
    {
        printf("\n> ");
        scanf(" %d", &enter);

        vet[n] = enter;
        n += 1;
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

    return 0;
}