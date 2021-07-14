#include <stdio.h>

int main(){
    int a = 8;
    int b = 9;
    int c = 7;
    int array[3] = {a, b, c};
    int arraysize = sizeof(array)/4;
    int newsize = arraysize;
    int val = 0;
    int valnext = 0;

    printf("\nDados os números (%d, %d, %d), temos que:\n", array[0], array[1], array[2]);

    for (int i = 0; i < arraysize-1; i++)
    {
        for (int j = 1; j < newsize; j++)
        {
            if (array[j] < array[j - 1])
            {
                valnext = array[j];
                array[j] = array[j - 1];
                array[j - 1] = valnext;
            }
        }
        newsize -= 1;
    }

    printf("\n=> Em ordem crescente, obtemos a sequência: (%d, %d, %d)\n\n", array[0], array[1], array[2]);

    return 0;
}