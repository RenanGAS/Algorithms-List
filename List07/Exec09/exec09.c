#include <stdio.h>

int matrixEquals(int r1, int c1, int m1[r1][c1], int r2, int c2, int m2[r2][c2])
{
    int r = 0;

    if (r1 != r2 || c1 != c2)
    {
        r = 0;
    }
    else
    {
        for (int i = 0; i < r1; i++)
        {
            for (int j = 0; j < c1; j++)
            {
                if (m1[i][j] == m2[i][j])
                {
                    r += 1;
                }
            }
        }

        if (r == (r1 * c1))
        {
            r = 1;
        }
        else
        {
            r = 0;
        }
        
    }

    return r;
}

int main()
{
    int mat1[4][4] = {{1, 2, 3, 7}, {4, 3, 2, 5}, {5, 4, 3, -3}, {1, 3, 4, 10}};
    int mat2[4][4] = {{1, 2, 3, 7}, {4, 3, 2, 5}, {5, 4, 3, -3}, {1, 3, 4, 10}};
    int r = 0;

    r = matrixEquals(4, 4, mat1, 4, 4, mat2);

    printf("\n=> %d\n\n", r);

    return 0;
}