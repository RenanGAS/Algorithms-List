#include <stdio.h>
#include <stdlib.h>

void print_random(int n, int max)
{
    printf("\nNúmeros sorteados:\n\n=> ");
    for (int i = 0; i < n; i++)
    {
        printf(" %d", rand() % max);
    }
}

int main()
{
    int n = 0;
    int max = 0;

    printf("\n\tSORTEIO\n");
    printf("\nDigite quantos números serão escolhidos: ");
    scanf(" %d", &n);
    printf("\nDigite o número limite(não incluído) do sorteio: ");
    scanf(" %d", &max);

    print_random(n, max);

    printf("\n\n");

    return 0;
}