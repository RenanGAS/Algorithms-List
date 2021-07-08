#include <stdio.h>

int main(){
    int varInt = 0;
    int i = 0;

    while (i == 0)
    {
        printf("Digite um número de 0 a 255: ");
        scanf(" %d", &varInt);

        if (varInt>=0 && varInt<=255)
        {   
            printf("\nDado o número %d, temos que:\n", varInt);
            printf("\n=> Na tabela ASCII, equivale ao caracter: %c,\n", varInt);
            printf("   ao decimal: %d,\n", varInt);
            printf("   ao octal: %o,\n", varInt);
            printf("   e ao hexadecimal: %X\n", varInt);
        }else
        {
            printf("\n%d não está no intervalo enunciado! Digite um número válido!\n", varInt);
        }

        printf("\nDigite 1 para fechar o programa, ou 0 para continuar: ");
        scanf(" %d", &i);
    }
}