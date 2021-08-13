#include <stdio.h>
#include <string.h>

void stringCapitalize(char str[])
{
    int n = 1;

    for (int i = 0; i < strlen(str); i++)
    {
        if ((str[i] >= 65 && str[i] <= 90) || (str[i] >= 97 && str[i] <= 122))
        {
            if (n == 1)
            {
                if (str[i] >= 97 && str[i] <= 122)
                {
                    str[i] -= 32;
                }
                n = 0;
            }
            else
            {
                if (str[i] >= 65 && str[i] <= 90)
                {
                    str[i] += 32;
                }
            }
        }
        else
        {
            n = 1;
        }
    }
}

int main()
{
    char str[] = "welCOME to    COMPUTER programing!!";

    stringCapitalize(str);

    printf("\n=> %s\n\n", str);

    return 0;
}