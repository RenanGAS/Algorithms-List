#include <stdio.h>

int maxLine(int rows, int cols, int m[rows][cols])
{
    int sum = 0;
    int sum1 = 0;
    int maxSum = 0;

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (i == 0)
            {
                sum += m[i][j];
            }
            else
            {
                sum1 += m[i][j];
            }
        }

        if (i == 0)
        {
            maxSum = sum;
        }

        if (maxSum < sum1)
        {
            maxSum = sum1;
        }
    }

    return maxSum;
}

int main()
{
    int mat[3][4] = {{1, 3, 100, 6}, {-5, 1, 38, 3}, {9, -1, 200, 5}};
    int r = 0;

    r = maxLine(3, 4, mat);

    printf("\n=> Maior soma: %d\n\n", r);

    return 0;
}