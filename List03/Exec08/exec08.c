#include <stdio.h>

int digits(int a)
{
    int result = a / 10;
    int countDigits = 0;

    if (result == 0)
    {
        countDigits = 1;
    }
    else
    {
        countDigits = 2;
        while (result != 0)
        {
            result = result / 10;
            if (result != 0)
            {
                countDigits += 1;
            }
        }
    }

    return countDigits;
}

int main()
{
    int a = 12;
    int b = digits(a);

    printf("\n%d\n\n", b);

    return 0;
}