#include <stdio.h>
#include <string.h>

void myStringTrim(char str[])
{
    
}

int main()
{
    char str[] = "   hello world   ";

    myStringTrim(str);

    printf("\n=> %s", str);

    return 0;
}