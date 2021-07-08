#include <stdio.h>

int main(){
    int a = 5;
    int b = 2;
    int radd = 0;
    int rsub = 0;

    // Adição
    radd = a+b;

    // Subtração
    rsub = a-b;

    printf("Dados a = 5 e b = 2, temos que:\n");
    printf("=> a+b = %d\n", radd);
    printf("=> a-b = %d\n", rsub);

    return 0;
}