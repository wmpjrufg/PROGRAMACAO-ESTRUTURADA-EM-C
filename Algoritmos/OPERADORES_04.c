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

    // Opera��es relacionais em C
    printf("\n Exemplo 1: X > Y: %d", X > Y);
    printf("\n Exemplo 2: X < Y: %d", X < Y);
    printf("\n Exemplo 3: X == Y: %d", X == Y);
    printf("\n Exemplo 4: X != Y: %d", X != Y);
    printf("\n Exemplo 5: X >= Y: %d", X >= Y);
    printf("\n Exemplo 6: X <= Y: %d\n", X <= Y);
}
