#include <stdio.h>

void sum(int rows, int cols, int m1[rows][cols], int m2[rows][cols], int m3[rows][cols])
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            m3[i][j] = m1[i][j] + m2[i][j];

            if (j == 0)
            {
                printf("\n%d", m3[i][j]);
            }
            else
            {
                printf(" %d", m3[i][j]);
            }
        }
    }

    printf("\n\n");
}

int main()
{
    int mat1[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int mat2[3][3] = {{1, 2, 3}, {4, 11, 6}, {7, 9, 9}};
    int mat3[3][3];

    sum(3, 3, mat1, mat2, mat3);

    return 0;
}