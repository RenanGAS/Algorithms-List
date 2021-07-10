#include <stdio.h>

int main(){
    // 3 notas escolares de 0 a 10
    int n1 = 9;
    int n2 = 10;
    int n3 = 9;
    float av = (float)(n1+n2+n3)/3;

    printf("\nDados as notas (%d, %d, %d), temos que:\n", n1, n2, n3);

    if (av>=8.5)
    {
        printf("\n=> Média aritmética simples = %.2f,\n", av);
        printf("\n=> Conceito = A\n\n");
    } else if (av>=7)
    {
        printf("\n=> Média aritmética simples = %.2f,\n", av);
        printf("\n=> Conceito = B\n\n");
    } else if (av>=5.5)
    {
        printf("\n=> Média aritmética simples = %.2f,\n", av);
        printf("\n=> Conceito = C\n\n");
    } else
    {
        printf("\n=> Média aritmética simples = %.2f,\n", av);
        printf("\n=> Conceito = F\n\n");
    }
    
    return 0;
}