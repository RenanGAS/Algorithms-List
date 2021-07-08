#include <stdio.h>

int main(){
    float a = 170.8911;
    int ia = (int)a;
    float adec = a-ia;

    printf("Dado a = 170.8911, temos que:\n\n");
    printf("=> \"a\" com uma precisão de duas casas decimais é igual a: %.2f,\n", a);
    printf("   Sua parte inteira é: %d,\n", ia);
    printf("   Sua parte decimal é: %f,\n", adec);
    printf("   E em notação científica, \"a\" tem o formato: %e\n", a);

    return 0;
}