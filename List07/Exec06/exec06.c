#include <stdio.h>
#include <stdlib.h>

void initRandom(int rows, int cols, int m[rows][cols], int min, int max)
{
    int elem = 0;

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            elem = (rand() % max) + 1;

            if (elem < min)
            {
                while (elem < min)
                {
                    elem = (rand() % max) + 1;
                }
            }

            m[i][j] = elem;

            if (j == 0)
            {
                printf("\n%d", m[i][j]);
            }
            else
            {
                printf(" %d", m[i][j]);
            }
        }
    }

    printf("\n\n");
}

int main()
{
    int mat[3][4];

    initRandom(3, 4, mat, 1, 10);

    return 0;
}