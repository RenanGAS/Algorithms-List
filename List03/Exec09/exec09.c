#include <stdio.h>

int main(){
    char varChar;

    printf("\nDigite um caracter: ");
    scanf(" %c", &varChar);

    printf("\nDado o caracter \"%c\", temos que:\n", varChar);

    if ((varChar>=65 && varChar<=90) || (varChar>=97 && varChar<=122))
    {
        printf("\n=> É uma letra!\n\n");
    } else
    {
        printf("\n=> Não é uma letra!\n\n");
    }

    return 0;
}