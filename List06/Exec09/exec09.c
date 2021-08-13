#include <stdio.h>
#include <string.h>

int countWordPlus(char str[])
{
    int r = 0;

    for (int i = 0; i < strlen(str); i++)
    {
        /* code */
    }
    

    return r;
}

int main()
{
    char str[] = "  Renan Guensuke   , Aoki Sakashita     ";
    int r = 0;

    r = countWordPlus(str);

    printf("\=> Número de palavras: %d\n\n", r);

    return 0;
}