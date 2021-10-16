#include <stdio.h>

void main ()
{
    // Declarando as variáveis
    int X, Y;

    // Digitação dos valores desejados
    printf("Digite o inteiro X desejado: ");
    scanf("%d", &X);
    printf("\n");
    printf("Digite o inteiro Y desejado: ");
    scanf("%d", &Y);
    printf("\n");

    printf("X = %d \n", X);
    printf("Y = %d \n", Y);

    // Operações lógicas em C
    printf("\n Exemplo 1: X OR Y: %d", X > Y || X < Y);
    printf("\n Exemplo 1: X AND Y: %d\n", X > Y && X >= Y);
}
