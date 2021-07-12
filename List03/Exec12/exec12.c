#include <stdio.h>

int main(){
    char op = ' ';
    int a = 0;
    int b = 0;

    printf("\n[ CALCULADORA SIMPLEX ]\n");
    printf("\nOperador> ");
    scanf(" %c", &op);
    printf("\nNúmero01> ");
    scanf(" %d", &a);
    printf("\nNúmero02> ");
    scanf(" %d", &b);
    printf("\n\nExpressão:\n\n");

    switch (op)
    {
    case 43:
        printf("%d + %d = %.2f\n\n", a, b, (float)a+b);
        break;
    case 45:
        printf("%d - %d = %.2f\n\n", a, b, (float)a-b);
        break;
    case 42:
        printf("%d * %d = %.2f\n\n", a, b, (float)a*b);
        break;
    case 47:
        printf("%d / %d = %.2f\n\n", a, b, (float)a/b);
        break;
    case 37:
        printf("%d %c %d = %.2f\n\n", a, 37, b, (float)(a%b));
        break;
    
    default:
        printf("Erro: Operação inválida!\n\n");
        break;
    }

    return 0;
}