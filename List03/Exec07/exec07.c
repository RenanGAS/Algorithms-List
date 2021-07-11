#include <stdio.h>

int main(){
    int a = 5;
    int b = 6;
    int c = 3;
    int array[3] = {a, b, c};
    int arraysize = sizeof(array)/4;
    int newsize = arraysize;
    int i;
    int j;
    int val = 0;
    int valnext = 0;

    printf("\nDados os números (%d, %d, %d), temos que:\n", array[0], array[1], array[2]);

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

    printf("\n=> Em ordem crescente, obtemos a sequência: (%d, %d, %d)\n\n", array[0], array[1], array[2]);

    return 0;
}