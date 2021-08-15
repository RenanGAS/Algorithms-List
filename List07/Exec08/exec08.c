#include <stdio.h>

void findTotals(int rows, int cols, int m[rows][cols])
{
    int sum = 0;

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols - 1; j++)
        {
            sum += m[i][j];

            if (j == 0)
            {
                printf("\n%d", m[i][j]);
            }
            else
            {
                printf(" %d", m[i][j]);
            }
        }

        m[i][cols - 1] = sum;

        printf(" %d", m[i][cols - 1]);
        
        sum = 0;
    }

    printf("\n\n");
}

int main()
{
    int mat[4][4] = {{1, 2, 3, 0}, {4, 3, 2, 0}, {5, 4, 3, 0}, {1, 3, 4, 0}};

    findTotals(4, 4, mat);

    return 0;
}