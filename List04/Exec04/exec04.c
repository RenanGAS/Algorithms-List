#include <stdio.h>

int main()
{
    int varInt = 0;

    printf("\nQuantos ímpares deseja?: ");
    scanf(" %d", &varInt);

    for (int i = 1; i <= varInt; i++)
    {
        if (i == 1)
        {
            printf("1 ");
        }
        else
        {
            printf("%d ", i + (i - 1));
        }
    }

    printf("\n\n");

    return 0;
}