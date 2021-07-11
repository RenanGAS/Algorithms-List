#include <stdio.h>

int digits(int a)
{
    int result = a / 10;
    int countDigits = 0;

    if (result == 0)
    {
        countDigits = 1;
    }
    else
    {
        countDigits = 2;
        while (result != 0)
        {
            result = result / 10;
            if (result != 0)
            {
                countDigits += 1;
            }
        }
    }

    return countDigits;
}

int main()
{
    // Escolha para 'a' um número de 1 a 5 dígitos
    int a = 38659;
    int b = digits(a);
    int d1 = 0;
    int d2 = 0;
    int d3 = 0;
    int d4 = 0;
    int d5 = 0;
    int div = a/10;

    printf("\nDado o número %d, temos que:\n", a);

    switch (b)
    {
    case 1:
        printf("\n=> A soma dos seus dígitos é igual a: %d\n\n", a);
        break;
    case 2:
        d1 = a % 10; // x
        d2 = div;
        printf("\n=> A soma dos seus dígitos é igual a: %d\n\n", d1 + d2);
        break;
    case 3:
        d1 = a % 10; // x
        d2 = (div) % 10; // y
        d3 = div / 10;
        printf("\n=> A soma dos seus dígitos é igual a: %d\n\n", d1 + d2 + d3);
        break;
    case 4:
        d1 = a % 10; // x
        d2 = (div) % 10; // y
        d3 = (div/10)%10; // z
        d4 = (div/10)/10;
        printf("\n=> A soma dos seus dígitos é igual a: %d\n\n", d1 + d2 + d3 + d4);
        break;
    case 5:
        d1 = a % 10; // x
        d2 = (div) % 10; // y
        d3 = (div/10)%10;  // z
        d4 = ((div/10)/10)%10; // r
        d5 = ((div/10)/10)/10;
        printf("\n=> A soma dos seus dígitos é igual a: %d\n\n", d1 + d2 + d3 + d4 + d5);
        break;

    default:
        printf("\n=> O número %d não pertence ao intervalo explicitado!\n\n", a);
        break;
    }

    return 0;
}