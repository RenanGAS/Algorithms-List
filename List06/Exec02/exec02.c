#include <stdio.h>
#include <string.h>

void printStringReversed(char str[])
{
    printf("\n=> \"String\" digitada ao contrário: ");

    for (int i = strlen(str) - 1; i >= 0; i--)
    {
        printf("%c", str[i]);
    }

    printf("\n\n");
}

int main()
{
    char string[] = " ";

    printf("\nDigite algo do tipo \"String\": ");
    scanf(" %s", &string);

    printStringReversed(string);

    return 0;
}