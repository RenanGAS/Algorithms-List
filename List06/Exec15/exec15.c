#include <stdio.h>
#include <string.h>

void intToString(long int number, char converted[])
{
    char aux[10];

    for (int i = 0; i < 10; i++)
    {
        if (number)
        {
            for (int j = 48; j < 58; j++)
            {
                if (number % 10 == (j - 48))
                {
                    aux[i] = (char)j;
                    break;
                }
            }

            number = number / 10;
        }
    }

    int l = strlen(aux) - 1;

    for (int i = 0; i < 10; i++)
    {
        if (l >= 0)
        {
            for (int j = 48; j < 58; j++)
            {
                if (aux[l] == (char)j)
                {
                    converted[i] = aux[l];
                    break;
                }
            }

            l--;
        }
        else
        {
            converted[i] = '\0';
        }
    }
}

int main()
{
    char num[10];

    intToString(512, num);

    printf("\n=> %s\n\n", num);

    return 0;
}