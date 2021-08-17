#include <stdio.h>
#include <string.h>

int stringToInt(char textNumber[])
{
    int sum = 0;
    int dez = 1;

    for (int i = 0; i < strlen(textNumber) - 1; i++)
    {
        dez *= 10;
    }

    for (int i = 0; i < strlen(textNumber); i++)
    {
        for (int j = 48; j < 58; j++)
        {
            if (textNumber[i] == (char)j)
            {
                sum += (j - 48) * dez;
                dez = dez / 10;
                break;
            }
        }
    }

    return sum;
}

int main()
{
    int n = stringToInt("1024");

    printf("\n=> %d\n\n", n);

    return 0;
}