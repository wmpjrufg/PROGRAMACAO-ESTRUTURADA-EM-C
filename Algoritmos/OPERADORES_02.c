#include <stdio.h>

void main ()
{
    // Declarando as variáveis
    int X, Y, M, N;

    // Digitação do valor desejado para instrução pré-fixada
    printf("Digite o inteiro desejado: ");
    scanf("%d", &X);
    printf("\n");

    Y = ++X;
    printf("X = %d \n", X);
    printf("Y = %d \n", Y);

    // Digitação do valor desejado para instrução pós-fixada
    printf("\nDigite o inteiro desejado: ");
    scanf("%d", &M);
    printf("\n");

    N = M++;
    printf("M = %d \n", M);
    printf("N = %d \n", N);
}
