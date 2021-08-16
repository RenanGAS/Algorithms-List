#include <stdio.h>

int checkUpperTriangle(int d, int m[d][d])
{
    int r = 0;
    int sum = 0;

    for (int i = 0; i < d; i++)
    {
        for (int j = 0; j < d; j++)
        {
            if (i > j)
            {
                if (m[i][j] == 0)
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

    if (r == sum)
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
    int mat1[5][5] = {{1, 2, 3, 4, 5},
                      {0, 2, 3, 4, 5},
                      {0, 0, 3, 4, 5},
                      {0, 0, 0, 4, 5},
                      {0, 0, 0, 0, 5}};
    int r = 0;

    r = checkUpperTriangle(5, mat1);

    printf("\n=> %d\n\n", r);

    return 0;
}
