#include <stdio.h>
#include <string.h>

void printStringSparse(char str[])
{
    printf("\n=> \"String\" digitada intercalada por \"*\": ");
    for (int i = 0; i < strlen(str); i++)
    {
        if (i == strlen(str) - 1)
        {
            printf("%c\n\n", str[i]);
        }
        else
        {
            printf("%c*", str[i]);
        }
    }
}

int main()
{
    char string[] = " ";

    printf("\nDigite algo do tipo \"String\": ");
    scanf(" %s", &string);

    printStringSparse(string);

    return 0;
}