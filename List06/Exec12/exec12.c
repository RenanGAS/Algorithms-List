#include <stdio.h>
#include <string.h>

void myStringTrim(char str[])
{
    char aux = ' ';
    int point = 0;

    for (int i = 0; i < strlen(str); i++)
    {
        for (int j = i + 1; j < strlen(str); j++)
        {
            if (str[i] == 32)
            {
                if (str[j] != 32)
                {
                    aux = str[j];
                    str[j] = 32;
                    str[i] = aux;
                }
            }
        }
    }
}

int main()
{
    char str[] = "     hello world  ";

    myStringTrim(str);

    printf("\n=> %s", str);

    return 0;
}