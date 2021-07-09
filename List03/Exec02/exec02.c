#include <stdio.h>

int main(){
    int a = 8;
    int r = a%2;

    printf("\nDado o número %d, temos que:\n", a);

    if (r == 0)
    {
        printf("\n=> %d é um número par!\n\n", a);
    }else
    {
        printf("\n => %d não é um número par.\n\n", a);
    }
    
    return 0;
}