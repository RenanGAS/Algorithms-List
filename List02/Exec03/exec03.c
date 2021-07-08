#include <stdio.h>

int main(){
    int a = 7;
    int b = 3;
    int rrest = 0;
    int rrest1 = 0;
    int rdiv = 0;
    int rmult = 0;
    int restsymbol = 37;

    // Resto utilizando o operador "%"
    rrest = a%b;

    // Resto sem utilizar o operador "%"
    rdiv = a/b; 
    rmult = rdiv * b;
    rrest1 = a - rmult;

    printf("Dados a = 7 e b = 3, temos que:\n");
    printf("=> a %c b = %d\t(Utilizando o operador \"%c\")\n", restsymbol, rrest, restsymbol);
    printf("=> a %c b = %d\t(Sem utilizar o operador \"%c\")\n", restsymbol, rrest1, restsymbol);

}