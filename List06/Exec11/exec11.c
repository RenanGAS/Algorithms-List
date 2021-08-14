#include <stdio.h>
#include <string.h>

int myStrCmp(char str1[], char str2[])
{
    int r = 0;
    int n = 0;

    if (strlen(str1) >= strlen(str2))
    {
        n = strlen(str2);
    }
    else
    {
        n = strlen(str1);
    }

    for (int i = 0; i < n; i++)
    {
        if (str1[i] != str2[i])
        {
            if (str1[i] < str2[i])
            {
                r = -1;
            }
            else
            {
                r = 1;
            }

            break;
        }
        else
        {
            r = 0;
        }
    }

    return r;
}

int main()
{
    char str1[] = "abCdef";
    char str2[] = "abCDef";

    printf("\n\n=> %d\n\n", myStrCmp(str1, str2));

    return 0;
}