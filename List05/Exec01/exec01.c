#include <stdio.h>

int is_letter(char ch)
{
    int r = 0;

    if ((ch >= 65 && ch <= 90) || (ch >= 97) && (ch <= 122))
    {
        r = 1;
    }

    return r;
}

int main()
{
    char varChar;
    int r = 0;

    printf("\nDigite um caracter: ");
    scanf(" %c", &varChar);

    r = is_letter(varChar);

    printf("\n=> %d\n\n", r);

    return 0;
}