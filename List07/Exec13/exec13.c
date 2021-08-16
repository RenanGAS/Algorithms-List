#include <stdio.h>

void pascalTriangle(int n)
{
    int m[n][n + 1];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n + 1; j++)
        {
            if (i == 0)
            {
                if (j != 1)
                {
                    m[i][j] = 0;
                }
                else
                {
                    m[i][j] = 1;
                }
            }
            else
            {
                if (j == 0)
                {
                    m[i][j] = 0;
                }
                else
                {
                    m[i][j] = m[i - 1][j - 1] + m[i - 1][j];
                }
            }

            if (j == 0)
            {
                printf("\n%d", m[i][j]);
            }
            else
            {
                printf(" %d", m[i][j]);
            }
        }
    }

    printf("\n\n");
}

int main()
{
    int varInt = 0;

    printf("\nDigite o número de linhas para o Triângulo de Pascal: ");
    scanf(" %d", &varInt);

    pascalTriangle(varInt);

    return 0;
}