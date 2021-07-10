#include <stdio.h>

int main(){
    int n1 = 6;
    int n2 = 7;

    printf("\nDados os números %d e %d, temos que:\n", n1, n2);

    if (n1>=0)
    {
        if (n2>=0)
        {
            if (n1!=n2)
            {
                if (n1 > n2)
                {
                    printf("\n=> %d é maior que %d!\n\n", n1, n2);
                } else
                {
                    printf("\n=> %d é maior que %d!\n\n", n2, n1);
                }
            } else 
            {
                printf("\n=> %d é igual a %d!\n\n", n1, n2);
            }
        } else
        {
            printf("\n=> O número %d não é um número natural!\n\n", n2);
        }
    } else
    {   
        printf("\n=> O número %d não é um número natural!\n\n", n1);
    }

    return 0;
}