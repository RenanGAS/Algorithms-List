#include <stdio.h>
#include <string.h>

void stringReport(char str[])
{
    int l = 0;
    int d = 0;
    int s = 0;

    for (int i = 0; i < strlen(str); i++)
    {
        if ((str[i] >= 65 && str[i] <= 90) || (str[i] >= 97 && str[i] <= 122))
        {
            l++;
        }
        else if (str[i] >= 48 && str[i] <= 57)
        {
            d++;
        }
        else
        {
            s++;
        }
    }

    int r[3] = {l, d, s};

    printf("\n=> A \"String\" digitada tem:");

    for (int i = 0; i < 3; i++)
    {
        if (i == 0 && r[i] == 1)
        {
            printf(" %d letra,", r[i]);
        }
        else if (i == 0 && r[i] != 1)
        {
            printf(" %d letras,", r[i]);
        }

        if (i == 1 && r[i] == 1)
        {
            printf(" %d dígito e", r[i]);
        }
        else if (i == 1 && r[i] != 1)
        {
            printf(" %d dígitos e", r[i]);
        }

        if (i == 2 && r[i] == 1)
        {
            printf(" %d símbolo\n\n", r[i]);
        }
        else if (i == 2 && r[i] != 1)
        {
            printf(" %d símbolos\n\n", r[i]);
        }
    }
}

int main()
{
    char str[100];

    printf("\nDigite uma \"String\": ");
    scanf(" %s", str);

    stringReport(str);

    return 0;
}