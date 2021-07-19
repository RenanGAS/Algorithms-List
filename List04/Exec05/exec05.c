#include <stdio.h>

int main()
{
    printf("\nDEC OCT HEX CHR\n");

    for (int i = 33; i <= 126; i++)
    {
        if (i >= 33 && i <= 99)
        {
            printf("\n0%d 0%o 0%X   %c\n", i, i, i, i);
        }
        else
        {
            printf("\n%d %o 0%X    %c\n", i, i, i, i);
        }
    }

    printf("\n");

    return 0;
}