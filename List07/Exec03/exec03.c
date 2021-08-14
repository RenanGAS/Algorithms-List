#include <stdio.h>

void maiorMenorMatriz(int rows, int cols, int m[rows][cols])
{
    int max = m[0][0];
    int min = m[0][0];

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (m[i][j] > max)
            {
                max = m[i][j];
            }
            else if (m[i][j] < min)
            {
                min = m[i][j];
            }
        }
    }

    printf("\n=> Menor elemento: %d, Maior elemento: %d\n\n", min, max);
}

int main()
{
    int mat[3][4] = {{1, 3, 5, 6}, {-5, 1, 38, 3}, {9, -1, 4, 5}};

    maiorMenorMatriz(3, 4, mat);

    return 0;
}