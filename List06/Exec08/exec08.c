#include <stdio.h>
#include <string.h>

int countWords(char str[])
{
    int count = 1;

    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] == ' ')
        {
            count++;
        }
    }

    return count;
}

int main()
{
    char str[] = "Renan Aoki Sakashita";
    int count = 0;

    count = countWords(str);

    printf("\nDada a \"String\": %s\n", str);

    printf("\n=> Temos que ela é formada por %d palavra(s)\n\n", count);

    return 0;
}