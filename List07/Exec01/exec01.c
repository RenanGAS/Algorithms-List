#include <stdio.h>

void printMat(int rows, int cols, int m[rows][cols])
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
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
    int mat[3][4] = {{1, 3, 5, 6}, {4, 1, 38, 3}, {9, -1, 4, 5}};

    printMat(3, 4, mat);

    return 0;
}