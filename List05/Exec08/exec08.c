#include <stdio.h>

void number_in_full_10(int n)
{
    if (n > 0)
    {
        switch (n)
        {
        case 1:
            printf("\n=> Um\n\n");
            break;
        case 2:
            printf("\n=> Dois\n\n");
            break;
        case 3:
            printf("\n=> Três\n\n");
            break;
        case 4:
            printf("\n=> Quatro\n\n");
            break;
        case 5:
            printf("\n=> Cinco\n\n");
            break;
        case 6:
            printf("\n=> Seis\n\n");
            break;
        case 7:
            printf("\n=> Sete\n\n");
            break;
        case 8:
            printf("\n=> Oito\n\n");
            break;
        case 9:
            printf("\n=> Nove\n\n");
            break;
        case 10:
            printf("\n=> Dez\n\n");
            break;

        default:
            printf("\nErro: Número fora do intervalo explicitado!\n\n");
            break;
        }
    }
    else if (n < 0)
    {
        switch (n)
        {
        case -1:
            printf("\n=> Menos Um\n\n");
            break;
        case -2:
            printf("\n=> Menos Dois\n\n");
            break;
        case -3:
            printf("\n=> Menos Três\n\n");
            break;
        case -4:
            printf("\n=> Menos Quatro\n\n");
            break;
        case -5:
            printf("\n=> Menos Cinco\n\n");
            break;
        case -6:
            printf("\n=> Menos Seis\n\n");
            break;
        case -7:
            printf("\n=> Menos Sete\n\n");
            break;
        case -8:
            printf("\n=> Menos Oito\n\n");
            break;
        case -9:
            printf("\n=> Menos Nove\n\n");
            break;
        case -10:
            printf("\n=> Menos Dez\n\n");
            break;

        default:
            printf("\nErro: Número fora do intervalo explicitado!\n\n");
            break;
        }
    }
    else
    {
        printf("\n=> Zero\n\n");
    }
}

int main()
{
    int n = 0;

    printf("\nDigite um número do intervalo [-10,10]: ");
    scanf(" %d", &n);

    number_in_full_10(n);

    return 0;
}