#include <stdio.h>

int main(){
    int a = 2020;
    int div4 = a%4;
    int div100 = a%100;
    int div400 = a%400;
    int rest = 37;

    printf("\nDado o ano %d, temos que:\n", a);
    
    if (div4 == 0)
    {
        if (div100 != 0)
        {
            printf("\n=> Como: %d %c %d = 0, e %d %c %d != 0,\n", a, rest, 4, a, rest, 100);
            printf("\n=> Esse ano é bissexto!\n\n");
        } else
        {
            printf("\n=> Como: %d %c %d = 0, mas %d %c %d == 0,\n", a, rest, 4, a, rest, 100);
            printf("\n=> Esse ano não é bissexto!\n\n");
        }
        
    } else if (div400 == 0)
    {
        printf("\n=> Como: %d %c %d != 0, mas %d %c %d == 0,\n", a, rest, 4, a, rest, 400);
        printf("\n=> Esse ano é bissexto!\n\n");
    } else
    {
        printf("\n=> Como: %d %c %d != 0 e %d %c %d != 0,\n", a, rest, 4, a, rest, 400);
        printf("\n=> Esse ano não é bissexto!\n\n");
    }
    
    
    return 0;
}