#include <stdio.h>

void switchDiagonals(int d, int m1[d][d])
{
    int j = d - 1;

    for (int i = 0; i < d; i++)
    {
        int temp = m1[i][i];
        m1[i][i] = m1[i][j];
        m1[i][j] = temp;

        j--;
    }

    for (int i = 0; i < d; i++)
    {
        for (int j = 0; j < d; j++)
        {
            if (j == 0)
            {
                printf("\n%d", m1[i][j]);
            }
            else
            {
                printf(" %d", m1[i][j]);
            }
        }
    }

    printf("\n\n");
}

int main()
{
    int mat1[7][7] = {{1, 2, 3, 2, 5, 1, 5},
                      {1, 9, 5, 4, 1, 5, 3},
                      {1, 6, 7, 4, 7, 1, 2},
                      {8, 2, 5, 3, 6, 6, 1},
                      {8, 2, 8, 3, 9, 2, 5},
                      {2, 1, 6, 7, 4, 6, 1},
                      {2, 1, 6, 7, 4, 6, 3}};

    for (int i = 0; i < 7; i++)
    {
        for (int j = 0; j < 7; j++)
        {
            if (j == 0)
            {
                printf("\n%d", mat1[i][j]);
            }
            else
            {
                printf(" %d", mat1[i][j]);
            }
        }
    }

    printf("\n\n");

    switchDiagonals(7, mat1);

    return 0;
}