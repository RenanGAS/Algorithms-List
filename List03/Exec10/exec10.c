#include <stdio.h>

int serLetra(char varChar)
{
    int result = 0;

    if ((varChar >= 65 && varChar <= 90) || (varChar >= 97 && varChar <= 122))
    {
        result = 1;
    }

    return result;
}

void conversor(char varChar){
    if (varChar >= 97 && varChar <= 122)
    {
        varChar -= 32;
        printf("\n=> Em maiúsculo fica: %c\n\n", varChar);
    } else
    {
        printf("\n=> \"%c\" é uma letra maiúscula!\n\n", varChar);
    }
}

int main()
{
    char varChar;

    printf("\nDigite um caracter: ");
    scanf(" %c", &varChar);

    int result = serLetra(varChar);

    if (result)
    {
        conversor(varChar);
    } else
    {
        printf("\n=> Não é uma letra!\n\n");
    }
    
    return 0;
}