#include <stdio.h>
#include <string.h>

void stringToUpper(char str[])
{
    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] >= 97 && str[i] <= 122)
        {
            str[i] -= 32;
        }
    }
}

int strcmpNoCase(char str[], char str1[])
{
    int r = 0;
    int n = 0;

    if (strlen(str) <= strlen(str1))
    {
        n = strlen(str);
    }
    else
    {
        n = strlen(str1);
    }

    for (int j = 0; j < n; j++)
    {
        if (str[j] != str1[j])
        {
            if (str[j] < str1[j])
            {
                r = -1;
            }
            else
            {
                r = 1;
            }
        }
    }

    return r;
}

int main()
{
    char str[100];
    char str1[100];
    int r = 0;

    printf("\nDigite uma \"String\": ");
    scanf(" %s", str);

    printf("\nDigite outra \"String\": ");
    scanf(" %s", str1);

    stringToUpper(str);
    stringToUpper(str1);

    r = strcmpNoCase(str, str1);

    printf("\n=> res: %d\n\n", r);

    return 0;
}