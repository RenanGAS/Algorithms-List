#include <stdio.h>
#include <stdlib.h>

void print_random(int n, int min, int max)
{
    int i = 0;
    int random = 0;

    printf("\nNúmeros sorteados:\n\n=> ");

    while (i < n)
    {
        random = rand() % max;

        if (random >= min)
        {
            printf(" %d", random);
            i += 1;
        }
    }
}

int main()
{
    int n = 0;
    int min = 0;
    int max = 0;

    printf("\n\tSORTEIO\n");
    printf("\nDigite quantos números serão escolhidos: ");
    scanf(" %d", &n);
    printf("\nDigite o número mínimo(incluído) do sorteio: ");
    scanf(" %d", &min);
    printf("\nDigite o número máximo(não incluído) do sorteio: ");
    scanf(" %d", &max);

    print_random(n, min, max);

    printf("\n\n");

    return 0;
}