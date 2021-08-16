#include <stdio.h>

int checkSymetric(int d, int m[d][d])
{
    int r = 0;
    int sum = 0;

    for (int i = 0; i < d; i++)
    {
        for (int j = 0; j < d; j++)
        {
            if (i != j)
            {
                if (m[i][j] == m[j][i])
                {
                    r += 1;
                }
            }
        }
    }

    while (d != 0)
    {
        sum += d - 1;
        d -= 1;
    }

    if (r / 2 == sum)
    {
        r = 1;
    }
    else
    {
        r = 0;
    }

    return r;
}

int main()
{
    int mat1[5][5] = {{1, 9, 8, 7, 6},
                      {9, 9, 0, 1, 5},
                      {8, 0, 1, 2, 4},
                      {7, 1, 2, 4, 3},
                      {6, 5, 4, 3, 5}};
    int r = 0;

    r = checkSymetric(5, mat1);

    printf("\n=> %d\n\n", r);

    return 0;
}