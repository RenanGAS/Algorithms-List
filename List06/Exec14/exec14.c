#include <stdio.h>
#include <string.h>

void cutString(char str[], char target[])
{
    int match = 0;
    int x = 0;
    int lenTarget = strlen(target);

    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] == target[x])
        {
            match += 1;
            x += 1;

            if (match == lenTarget)
            {
                for (int j = i + 1; j < strlen(str); j++)
                {
                    str[j] = 0;
                }
                break;
            }
        }
        else
        {
            match = 0;
            x = 0;
        }
    }
}

int main()
{
    char str[] = "first things first, second things latter";

    cutString(str, "second things");

    printf("\n=> %s\n\n", str);

    return 0;
}