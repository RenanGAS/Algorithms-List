#include <stdio.h>

void printString(char str[])
{
    printf("\n=> \"String\" digitada: ");

    for (int i = 0; str[i] != '\0'; i++)
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