#include <stdio.h>

int main(){
    int varInt = 0;
    int i;

    printf("\n\t\tTabuada\n\n");
    printf("Digite um número: ");
    scanf(" %d", &varInt);
    printf("\nTabuada do número %d:\n\n", varInt);

    for (i = 1; i < 6; i++)
    {
        int i1 = i+5;
        printf("%d x %d = %d %5d x %d = %d\n", varInt, i, varInt*i, varInt, i1, varInt*i1);
    }

    return 0;
}