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

        sum1 = 0;
    }

    return maxSum;
}

int main()
{
    int mat[4][4] = {{1,2,3,4}, {4,3,2,8}, {5,4,3,2},{1,3,4,10}};
    int r = 0;

    r = maxLine(4, 4, mat);

    printf("\n=> Maior soma: %d\n\n", r);

    return 0;
}