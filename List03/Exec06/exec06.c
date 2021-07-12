#include <stdio.h>

int main()
{
    int a = 20;
    int b = 15;
    int c = 14;
    int d = 16;
    int array[4] = {a, b, c, d};
    int arraysize = sizeof(array) / 4;
    int val;
    int valnext;
    int result;

    printf("\nDados os números (%d, %d, %d, %d), temos que:\n", array[0], array[1], array[2], array[3]);

    for (int i = 0; i < arraysize; i++)
    {
        if (array[i] > array[i + 1])
        {
            val = array[i];
            valnext = array[i + 1];
            array[i + 1] = val;
            array[i] = valnext;
        }
    }

    result = array[3];
    printf("\n=> O maior número é: %d\n\n", result);

    return 0;
}