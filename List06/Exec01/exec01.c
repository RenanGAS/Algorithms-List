#include <stdio.h>
#include <string.h>

void printString(char str[])
{
    printf("\n=> \"String\" digitada: ");

    for (int i = 0; i < strlen(str); i++)
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

    printString(string);

    return 0;
}