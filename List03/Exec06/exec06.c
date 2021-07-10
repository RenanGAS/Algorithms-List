#include <stdio.h>

int main()
{
    int a = 9;
    int b = 10;
    int c = 0;
    int d = 1;
    int array[4] = {a, b, c, d};
    int arraysize = sizeof(array)/4;
    int newsize = arraysize;
    int i;
    int j;
    int val = 0;
    int valnext = 0;

    printf("\nDados os números (%d, %d, %d, %d), temos que:\n", array[0], array[1], array[2], array[3]);

    for (i = 0; i < arraysize-1; i++)
    {
        for (j = 0; j < newsize; j++)
        {
            if (array[j] > array[j + 1])
            {
                val = array[j];
                valnext = array[j+1];
                array[j + 1] = val;
                array[j] = valnext;
            }
        }
        newsize -= 1;
    }

    printf("\n=> Em ordem crescente, obtemos a sequência: (%d, %d, %d, %d)\n", array[0], array[1], array[2], array[3]);
    printf("=> Sendo o maior número: %d\n\n", array[3]);

    return 0;
}