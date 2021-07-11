#include <stdio.h>

int main()
{
    int a = 13;
    int b = 15;
    int c = 14;
    int d = 16;
    int array[4] = {a, b, c, d};
    int arraysize = sizeof(array) / 4;
    int i;
    int j;
    int val;
    int valnext;
    int result;

    printf("\nDados os números (%d, %d, %d, %d), temos que:\n", array[0], array[1], array[2], array[3]);

    for (j = 0; j < arraysize; j++)
    {
        if (array[j] > array[j + 1])
        {
            val = array[j];
            valnext = array[j + 1];
            array[j + 1] = val;
            array[j] = valnext;
        }
    }

    result = array[3];
    printf("\n=> O maior número é: %d\n\n", result);

    return 0;
}