#include <stdio.h>
#include <string.h>

int countWordPlus(char str[])
{
    int r = 0;
    int l = 0;

    for (int i = 0; i < strlen(str); i++)
    {
        if ((str[i] >= 65 && str[i] <= 90) || (str[i] >= 97 && str[i] <= 122))
        {
            l += 1;
        }
        else if (l > 1)
        {
            r += 1;
            l = 0;
        }
        else
        {
            l = 0;
        }
    }

    return r;
}

int main()
{
    char str[] = "  first     things  first, second   things latter ";
    int r = 0;

    r = countWordPlus(str);

    printf("\n=> Número de palavras: %d\n\n", r);

    return 0;
}