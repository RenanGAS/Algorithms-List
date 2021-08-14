#include <stdio.h>

void printMatRev(int rows, int cols, int m[rows][cols])
{
    for (int i = rows - 1; i >= 0; i--)
    {
        for (int j = cols - 1; j >= 0; j--)
        {
            if (j == cols - 1)
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

    printMatRev(3, 4, mat);

    return 0;
}