#include <stdio.h>
#include <string.h>

int findSubstring(char str[], char sub[])
{
    int r = 0;
    int match = 0;
    int x = 0;
    int lenSub = strlen(sub);

    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] == sub[x])
        {
            match += 1;
            x += 1;

            if (match == lenSub)
            {
                r = 1;
                break;
            }
        }
        else
        {
            match = 0;
            x = 0;
        }
    }

    return r;
}

int main()
{
    char str[] = "first things first, second things latter";

    int check = findSubstring(str, "second");

    printf("\n=> %d\n\n", check);

    return 0;
}