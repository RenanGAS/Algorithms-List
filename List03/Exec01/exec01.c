#include <stdio.h>

int main(){
    // Escolha um número de 0 a 9
    int a = 7;

    printf("\nDado o número %d, temos que:\n", a);
    
    switch (a)
    {
    case 0:
        printf("\n=> Seu valor por extenso é: Zero\n\n");
        break;
    case 1:
        printf("\n=> Seu valor por extenso é: Um\n\n");
        break;
    case 2:
        printf("\n=> Seu valor por extenso é: Dois\n\n");
        break;
    case 3:
        printf("\n=> Seu valor por extenso é: Três\n\n");
        break;
    case 4:
        printf("\n=> Seu valor por extenso é: Quatro\n\n");
        break;
    case 5:
        printf("\n=> Seu valor por extenso é: Cinco\n\n");
        break;
    case 6:
        printf("\n=> Seu valor por extenso é: Seis\n\n");
        break;
    case 7:
        printf("\n=> Seu valor por extenso é: Sete\n\n");
        break;
    case 8:
        printf("\n=> Seu valor por extenso é: Oito\n\n");
        break;
    case 9:
        printf("\n=> Seu valor por extenso é: Nove\n\n");
        break;
    default:
        printf("\nO número %d não faz parte do intervalo enunciado!\n\n", a);
        break;
    }
    
    return 0;
}