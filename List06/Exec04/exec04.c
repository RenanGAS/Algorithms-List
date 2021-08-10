#include <stdio.h>
#include <string.h>

void printStringCustom(char str[], char varChar)
{
    printf("\n=> str_merged[%ld] = \"", strlen(str) + (strlen(str) - 1));

    for (int i = 0; i < strlen(str); i++)
    {
        if (i != strlen(str) - 1)
        {
            printf("%c%c", str[i], varChar);
        }
        else
        {
            printf("%c\"\n\n", str[i]);
        }
    }
}

int main()
{
    char str[100] = " ";
    char varChar = ' ';

    printf("\nDigite uma \"String\": ");
    scanf(" %s", str);

    printf("\nDigite um carater para intercalar as letras da \"String\": ");
    scanf(" %c", &varChar);

    printStringCustom(str, varChar);

    return 0;
}