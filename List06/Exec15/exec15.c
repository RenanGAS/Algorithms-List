#include <stdio.h>

void intToString(int number, char converted[])
{
    int j = 0;
    int stop = 1;

    while (stop)
    {
        for (int i = 48; i < 58; i++)
        {
            if (number % 10 == (i - 48))
            {
                converted[j] = (char)i;
            }
        }

        j += 1;
        number = number / 10;
        stop = number;
    }
}

int main()
{
    char num[11];

    intToString(512, num);

    printf("\n=> %s\n\n", num);

    return 0;
}