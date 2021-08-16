#include <stdio.h>

int checkIdentity(int rows, int cols, int m[rows][cols])
{
    int r = 0;

    if (rows == cols)
    {
        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < cols; j++)
            {
                if (i == j)
                {
                    if (m[i][j] == 1)
                    {
                        r += 1;
                    }
                }
                else
                {
                    if (m[i][j] == 0)
                    {
                        r += 1;
                    }
                }
            }
        }

        if (r == rows * cols)
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
    int mat1[5][5] = {{1, 0, 0, 0, 0},
                      {0, 1, 0, 0, 0},
                      {0, 0, 1, 0, 0},
                      {0, 0, 0, 1, 0},
                      {0, 0, 0, 0, 1}};
    int r = 0;

    r = checkIdentity(5, 5, mat1);

    printf("\n=> %d\n\n", r);

    return 0;
}