#include <stdio.h>

void fillMatrix(int rows, int cols, int m[rows][cols])
{
    int init = (rows * cols) + 1;

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            init--;
            m[i][j] = init;

            if (j == 0)
            {
                printf("\n%d", m[i][j]);
            }
            else
            {
                if ((m[i][j] > 0) && (m[i][j] < 10))
                {
                    printf("  %d", m[i][j]);
                }
                else
                {
                    printf(" %d", m[i][j]);
                }
            }
        }
    }

    printf("\n\n");
}

int main()
{
    int mat[3][9];

    printf("\nConsiderando uma matriz com %d linhas e %d colunas:\n", 3, 9);

    fillMatrix(3, 9, mat);

    return 0;
}