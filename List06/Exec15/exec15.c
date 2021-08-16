#include <stdio.h>

void intToString(long int number, char converted[])
{
    int j = 0;

    while (number)
    {
        for (int i = 48; i < 58; i++)
        {
            if (number % 10 == (i - 48))
            {
                converted[j] = (char)i;
            }
        }

        j++;
        number = number / 10;
    }
}

int main()
{
    char num[10];
    // int j = 0;

    intToString(5123646, num);

    // for (int i = 48; i < 58; i++)
    // {
    //     num[j] = (char)i;
    //     j++;
    // }

    printf("\n=> %s\n\n", num);
    
    return 0;
}