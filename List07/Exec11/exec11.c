#include <stdio.h>

void transpose(int r1, int c1, int m1[r1][c1], int r2, int c2, int m2[r2][c2])
{
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            m2[j][i] = m1[i][j];
        }
    }

    for (int i = 0; i < r2; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            if (j == 0)
            {
                printf("\n%d", m2[i][j]);
            }
            else
            {
                printf(" %d", m2[i][j]);
            }
        }
    }

    printf("\n\n");
}

int main()
{
    int mat1[2][4] = {{1, 2, 3, 6}, {4, 11, 6, 7}};
    int mat2[4][2];

    transpose(2, 4, mat1, 4, 2, mat2);

    return 0;
}