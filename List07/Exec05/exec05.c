#include <stdio.h>

void initValues(int rows, int cols, int m[rows][cols], int start, int step)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (i == 0 && j == 0)
            {
                m[i][j] = start;
            }
            else
            {
                start += step;
                m[i][j] = start;
            }

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
}

int main()
{
    int mat[3][4];

    initValues(3, 4, mat, 11, 3);

    return 0;
}