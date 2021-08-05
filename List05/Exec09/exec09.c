#include <stdio.h>

void number_in_full_100(int n)
{
    if (n >= 0)
    {
        printf("\n=> ");
    }
    else if (n < 0)
    {
        printf("\n=> Menos ");
    }

    if (n / 10 != 0)
    {
        if ((n / 10 == 1) || (n / 10 == -1))
        {
            switch (n)
            {
            case 10:
                printf("Dez\n\n");
                break;
            case -10:
                printf("Dez\n\n");
                break;
            case 11:
                printf("Onze\n\n");
                break;
            case -11:
                printf("Onze\n\n");
                break;
            case 12:
                printf("Doze\n\n");
                break;
            case -12:
                printf("Doze\n\n");
                break;
            case 13:
                printf("Treze\n\n");
                break;
            case -13:
                printf("Treze\n\n");
                break;
            case 14:
                printf("Quatorze\n\n");
                break;
            case -14:
                printf("Quatorze\n\n");
                break;
            case 15:
                printf("Quinze\n\n");
                break;
            case -15:
                printf("Quinze\n\n");
                break;
            case 16:
                printf("Dezesseis\n\n");
                break;
            case -16:
                printf("Dezesseis\n\n");
                break;
            case 17:
                printf("Dezesete\n\n");
                break;
            case -17:
                printf("Dezesete\n\n");
                break;
            case 18:
                printf("Dezoito\n\n");
                break;
            case -18:
                printf("Dezoito\n\n");
                break;
            case 19:
                printf("Dezenove\n\n");
                break;
            case -19:
                printf("Dezenove\n\n");
                break;

            default:
                break;
            }
        }
        else
        {
            if ((n / 10 == 2) || (n / 10 == -2))
            {
                printf("Vinte e ");
            }
            else if ((n / 10 == 3) || (n / 10 == -3))
            {
                printf("Trinta e ");
            }
            else if ((n / 10 == 4) || (n / 10 == -4))
            {
                printf("Quarenta e ");
            }
            else if ((n / 10 == 5) || (n / 10 == -5))
            {
                printf("Cinquenta e ");
            }
            else if ((n / 10 == 6) || (n / 10 == -6))
            {
                printf("Sessenta e ");
            }
            else if ((n / 10 == 7) || (n / 10 == -7))
            {
                printf("Setenta e ");
            }
            else if ((n / 10 == 8) || (n / 10 == -8))
            {
                printf("Oitenta e ");
            }
            else if ((n / 10 == 9) || (n / 10 == -9))
            {
                printf("Noventa e ");
            }
            else if (n == 100 || n == -100)
            {
                printf("Cem\n\n");
            }
            else
            {
                printf("Erro: Número fora do intervalo explicitado!\n\n");
                n = 0;
            }

            switch (n % 10)
            {
            case 1:
                printf("Um\n\n");
                break;
            case -1:
                printf("Um\n\n");
                break;
            case 2:
                printf("Dois\n\n");
                break;
            case -2:
                printf("Dois\n\n");
                break;
            case 3:
                printf("Três\n\n");
                break;
            case -3:
                printf("Três\n\n");
                break;
            case 4:
                printf("Quatro\n\n");
                break;
            case -4:
                printf("Quatro\n\n");
                break;
            case 5:
                printf("Cinco\n\n");
                break;
            case -5:
                printf("Cinco\n\n");
                break;
            case 6:
                printf("Seis\n\n");
                break;
            case -6:
                printf("Seis\n\n");
                break;
            case 7:
                printf("Sete\n\n");
                break;
            case -7:
                printf("Sete\n\n");
                break;
            case 8:
                printf("Oito\n\n");
                break;
            case -8:
                printf("Oito\n\n");
                break;
            case 9:
                printf("Nove\n\n");
                break;
            case -9:
                printf("Nove\n\n");
                break;

            default:
                break;
            }
        }
    }
    else
    {
        switch (n)
        {
        case 1:
            printf("Um\n\n");
            break;
        case -1:
            printf("Um\n\n");
            break;
        case 2:
            printf("Dois\n\n");
            break;
        case -2:
            printf("Dois\n\n");
            break;
        case 3:
            printf("Três\n\n");
            break;
        case -3:
            printf("Três\n\n");
            break;
        case 4:
            printf("Quatro\n\n");
            break;
        case -4:
            printf("Quatro\n\n");
            break;
        case 5:
            printf("Cinco\n\n");
            break;
        case -5:
            printf("Cinco\n\n");
            break;
        case 6:
            printf("Seis\n\n");
            break;
        case -6:
            printf("Seis\n\n");
            break;
        case 7:
            printf("Sete\n\n");
            break;
        case -7:
            printf("Sete\n\n");
            break;
        case 8:
            printf("Oito\n\n");
            break;
        case -8:
            printf("Oito\n\n");
            break;
        case 9:
            printf("Nove\n\n");
            break;
        case -9:
            printf("Nove\n\n");
            break;

        default:
            printf("Zero\n\n");
            break;
        }
    }
}

int main()
{
    int n = 0;

    printf("\nDigite um número do intervalo [-100,100]: ");
    scanf(" %d", &n);

    number_in_full_100(n);

    return 0;
}