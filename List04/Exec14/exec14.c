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

int sumDigits(int a)
{
    int b = digits(a);
    int d1 = 0;
    int d2 = 0;
    int d3 = 0;
    int d4 = 0;
    int d5 = 0;
    int d6 = 0;
    int div = a / 10;
    int sum = 0;

    switch (b)
    {
    case 1:
        sum = a;
        break;
    case 2:
        d1 = a % 10; 
        d2 = div;
        sum = d1 + d2;
        break;
    case 3:
        d1 = a % 10;     
        d2 = (div) % 10; 
        d3 = div / 10;
        sum = d1 + d2 + d3;
        break;
    case 4:
        d1 = a % 10;          
        d2 = (div) % 10;      
        d3 = (div / 10) % 10; 
        d4 = (div / 10) / 10;
        sum = d1 + d2 + d3 + d4;
        break;
    case 5:
        d1 = a % 10;                
        d2 = (div) % 10;            
        d3 = (div / 10) % 10;       
        d4 = ((div / 10) / 10) % 10;
        d5 = ((div / 10) / 10) / 10;
        sum = d1 + d2 + d3 + d4 + d5;
        break;
    case 6:
        d1 = a % 10;                 
        d2 = (div) % 10;             
        d3 = (div / 10) % 10;        
        d4 = ((div / 10) / 10) % 10; 
        d5 = (((div / 10) / 10) / 10) % 10;
        d6 = (((div / 10) / 10) / 10) / 10;
        sum = d1 + d2 + d3 + d4 + d5 + d6;
        break;

    default:
        printf("\n=> O número %d não pertence ao intervalo explicitado!\n\n", a);
        break;
    }

    return sum;
}

int verifDigit(int a)
{
    int sDigits = sumDigits(a);
    int vDigit = sDigits%10;

    return vDigit;
}

int main()
{
    int varInt = 0;

    printf("\nDigite o número da sua conta no banco(deve ter de 1 a 6 dígitos): ");
    scanf(" %d", &varInt);

    int nDigits = digits(varInt);
    int vDigit = verifDigit(varInt);

    switch (nDigits)
    {
    case 1:
        printf("\n=> O número completo da sua conta bancária é: 00000%d-%d\n\n", varInt, vDigit);
        break;
    case 2:
        printf("\n=> O número completo da sua conta bancária é: 0000%d-%d\n\n", varInt, vDigit);
        break;
    case 3:
        printf("\n=> O número completo da sua conta bancária é: 000%d-%d\n\n", varInt, vDigit);
        break;
    case 4:
        printf("\n=> O número completo da sua conta bancária é: 00%d-%d\n\n", varInt, vDigit);
        break;
    case 5:
        printf("\n=> O número completo da sua conta bancária é: 0%d-%d\n\n", varInt, vDigit);
        break;
    case 6:
        printf("\n=> O número completo da sua conta bancária é: %d-%d\n\n", varInt, vDigit);
        break;

    default:
        printf("=> Insira outro número.\n\n");
        break;
    }

    return 0;
}