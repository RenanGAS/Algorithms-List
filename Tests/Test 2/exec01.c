#include <stdio.h>

void string_copy(char str1[], char str2[])
{
    for (int i = 0; i < 20; i++)
    {
        str2[i] = str1[i];
    }

    printf("\n=> str2[20] = \"%s\"\n\n", str2);
}

int main()
{
    char str1[] = "Exercicio 01";
    char str2[20];

    printf("\nCopiando str1[] = \"%s\" para str2[20]:\n", str1);

    string_copy(str1, str2);

    return 0;
}