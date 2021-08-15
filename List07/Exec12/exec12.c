#include <stdio.h>

void switchDiagonals(int d, int m1[d][d])
{
    int aux = 0;

    for (int i = 0; i < d; i++)
    {
        for (int j = 0; j < d; j++)
        {
            if ((i == 0 && j == 0) || (i == d - 1 && j == 0))
            {
                aux = m1[i][j + (d - 1)];
                m1[i][j + (d - 1)] = m1[i][j];
                m1[i][j] = aux;
            }

            if ((d != 2) && (d != 3))
            {
                if (i == 1 && j == 1)
                {
                    aux = m1[i][j + (d - 3)];
                    m1[i][j + (d - 3)] = m1[i][j];
                    m1[i][j] = aux;
                }
                else if (d % 2 == 0)
                {
                    if ((i != 0) && (i != d - 1) && i == j)
                    {
                        aux = m1[i][j - (d - 3)];
                        m1[i][j - (d - 3)] = m1[i][j];
                        m1[i][j] = aux;
                    }
                }
                else
                {
                    if ((i != (d / 2)) && (i != 0) && (i == d - 1) && i == j)
                    {
                        aux = m1[i][j - (d - 3)];
                        m1[i][j - (d - 3)] = m1[i][j];
                        m1[i][j] = aux;
                    }
                }
            }

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
    int mat1[4][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 1, 2, 3}, {4, 5, 6, 7}};

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
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

    switchDiagonals(4, mat1);

    return 0;
}