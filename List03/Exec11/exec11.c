#include <stdio.h>

void classLetra(int varChar)
{
    int wArray[10] = {65, 69, 73, 79, 85, 97, 101, 105, 111, 117};
    int wArraySize = sizeof(wArray) / 4;
    int arrayE = 0;
    int vL = 0;
    int i;

    for (i = 0; i < wArraySize; i++)
    {
        arrayE = wArray[i];
        if (varChar == arrayE)
        {
            vL = 1;
        }
    }

    if (vL)
    {
        printf("\n=> É uma vogal!\n\n");
    }
    else
    {
        printf("\n=> É uma consoante!\n\n");
    }
}

int main()
{
    // Informe um caracter
    char varChar = 'o';

    printf("\nDado o caracter \"%c\", temos que:\n", varChar);

    if ((varChar >= 65 && varChar <= 90) || (varChar >= 97 && varChar <= 122))
    {
        classLetra(varChar);
    } else if (varChar>=48 && varChar<=57)
    {
        printf("\n=> É um número!\n\n");
    } else
    {
        printf("\n=> É um símbolo!\n\n");
    }
    
    return 0;
}