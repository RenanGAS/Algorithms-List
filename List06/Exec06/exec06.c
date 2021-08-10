#include <stdio.h>
#include <string.h>

void stringToUpper(char str[])
{
    printf("\n=> \"String\" toda em maiúsculo: ");

    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] >= 97 && str[i] <= 122)
        {
            str[i] -= 32;
        }
    }

    printf("%s\n\n", str);
}

int main()
{
    // char str[100] = "Renan Guensuke Aoki Sakashita";
    char str[100];

    printf("\nDigite uma \"String\": ");
    scanf(" %s", str);

    stringToUpper(str);

    return 0;
}