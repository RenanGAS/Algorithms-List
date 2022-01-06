#include <stdio.h>

int main()
{
    int a = 0;
    int b = 0;
    int c = 0;
    int menor = 0;
    int contImp = 0;
    int repeat = 2;

    printf("\nDigite 3 números inteiros:\n");

    printf("\n> ");
    scanf(" %d", &a);

    if (a % 2 != 0)
    {
        contImp += 1;
    }

    menor = a;

    while (repeat)
    {
        printf("\n> ");
        scanf(" %d", &b);

        if (b % 2 != 0)
        {
            contImp += 1;
        }

        if (b < menor)
        {
            menor = b;
        }

        repeat--;
    }

    printf("\n=> O menor número digitado é: %d\n", menor);

    if (contImp == 0)
    {
        printf("\n=> E nenhum número ímpar foi digitado\n\n");
    }
    else
    {
        if (contImp > 1)
        {
            printf("\n=> E foram digitados %d números ímpares\n\n", contImp);
        }
        else
        {
            printf("\n=> E foi digitado %d número ímpar\n\n", contImp);
        }
    }

    return 0;
}