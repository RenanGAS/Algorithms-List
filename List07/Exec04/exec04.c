#include <stdio.h>

void averageMatriz(int rows, int cols, int m[rows][cols])
{
    int sum = 0;

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            sum += m[i][j];
        }
    }

    printf("\n=> Média simples: %.2f\n\n", (float)sum/(rows*cols));
}

int main()
{
    int mat[3][4] = {{1, 1, 1, 1}, {1, 1, 1, 1}, {1, 1, 1, 13}};

    averageMatriz(3, 4, mat);

    return 0;
}