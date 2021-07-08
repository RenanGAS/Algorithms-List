#include <stdio.h>

int main(){
    int a = 6; // Nota de participação
    int b = 10; // Nota de atividades
    int c = 7; // Nota da prova
    float pa = 0.1; // Peso de a
    float pb = 0.5; // Peso de b
    float pc = 0.4; // Peso de c
    int irsav = 0; // Resultado inteiro da média simples
    int irwav = 0; // Resultado inteiro da média ponderada
    float frsav = 0; // Resultado real da média simples
    float frwav = 0; // Resultado real da média ponderada
    float dec = 0; // Parte decimal do resultado da média

    // Média aritmética simples (Com arredondamento para cima, se a parte decimal for maior ou igual a 0.5)
    irsav = (a+b+c)/3;
    frsav = (float)(a+b+c)/3;
    dec = frsav - irsav;
    if (dec>=0.5)
    {
        irsav += 1;
    } 

    // Média aritmética ponderada (Com arredondamento para cima, se a parte decimal for maior ou igual a 0.5)
    frwav = a*pa + b*pb + c*pc;
    irwav = (int)frwav;
    dec = frwav - irwav;
    if (dec>=0.5)
    {
        irwav += 1;
    } 

    printf("\nDados a = 6, b = 10 e c = 7, temos que:\n\n");
    printf("=> Média aritmética simples:\n");
    printf("=> %.2f (Antes do arredondamento)\n", frsav);
    printf("=> %d\n\n", irsav);
    printf("=> Média aritmética ponderada:\n");
    printf("=> %.2f (Antes do arredondamento)\n", frwav);
    printf("=> %d\n", irwav);
    
    return 0;
}