#include <stdio.h>

void main ()
{
    // Declarando as vari�veis
    int X, Y;

    // Digita��o dos valores desejados
    printf("Digite o inteiro X desejado: ");
    scanf("%d", &X);
    printf("\n");
    printf("Digite o inteiro Y desejado: ");
    scanf("%d", &Y);
    printf("\n");

    printf("X = %d \n", X);
    printf("Y = %d \n", Y);

    // Opera��es l�gicas em C
    printf("\n Exemplo 1: X OR Y: %d", X > Y || X < Y);
    printf("\n Exemplo 1: X AND Y: %d\n", X > Y && X >= Y);
}
