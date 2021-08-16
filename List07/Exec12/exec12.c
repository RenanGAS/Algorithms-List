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
            else if ((d != 2) && (d != 3))
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
                    if ((i != (d / 2)) && (i != 0) && (i == d - 2) && i == j)
                    {
                        aux = m1[i][j - (d - 3)];
                        m1[i][j - (d - 3)] = m1[i][j];
                        m1[i][j] = aux;
                    }
                }
            }
        }
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
    // int mat1[7][7] = {{1, 2, 3, 2, 5, 1, 5},
    //                   {1, 9, 5, 4, 1, 5, 3},
    //                   {1, 6, 7, 4, 7, 1, 2},
    //                   {8, 2, 5, 3, 6, 6, 1},
    //                   {8, 2, 8, 3, 9, 2, 5},
    //                   {2, 1, 6, 7, 4, 6, 1},
    //                   {2, 1, 6, 7, 4, 6, 3}};

    // int mat1[6][6] = {{5, 2, 3, 2, 5, 1},
    //                   {1, 9, 5, 4, 1, 5},
    //                   {1, 6, 7, 4, 7, 1},
    //                   {8, 2, 5, 3, 6, 6},
    //                   {8, 2, 8, 3, 9, 2},
    //                   {2, 1, 6, 7, 4, 6}};

    int mat1[5][5] = {{1, 2, 3, 2, 5}, // -> Funciona
                      {1, 9, 5, 4, 1},
                      {1, 6, 7, 4, 7},
                      {8, 2, 5, 3, 6},
                      {8, 2, 8, 3, 9}};

    // int mat1[4][4] = {{1, 2, 3, 2},  -> Funciona
    //                   {1, 9, 5, 4},
    //                   {1, 6, 7, 4},
    //                   {8, 2, 5, 3}};

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
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

    switchDiagonals(5, mat1);

    return 0;
}