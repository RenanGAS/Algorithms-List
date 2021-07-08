#include <stdio.h>

int main(){
    int a = 14;
    int b = 2;
    int rmult = 0;
    int rdiv = 0;
    float rdivr = 0;

    // Multiplicação
    rmult = a*b;

    // Divisão inteira
    rdiv = a/b;

    // Divisão real
    rdivr = (float)a/b;

    printf("Dados a = 14 e b = 2, temos que:\n");
    printf("=> a*b = %d\n", rmult);
    printf("=> a/b = %d\n", rdiv);
    printf("=> Divisão real => a/b = %.1f\n", rdivr);

    return 0;
}