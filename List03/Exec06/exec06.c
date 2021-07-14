#include <stdio.h>

int main()
{
    int a = 25;
    int b = 24;
    int c = 26;
    int d = 23;
    int array[4] = {a, b, c, d};
    int arraysize = sizeof(array) / 4;
    int valnext;
    int result;

    printf("\nDados os números (%d, %d, %d, %d), temos que:\n", array[0], array[1], array[2], array[3]);

    for (int i = 1; i < arraysize; i++)
    {
        if (array[i] < array[i - 1])
        {
            valnext = array[i];
            array[i] = array[i - 1];
            array[i - 1] = valnext;
        }
    }

    result = array[3];
    printf("\n=> O maior número é: %d\n\n", result);

    return 0;
}