#include <stdio.h>

void main ()
{
    // Declarando as vari�veis
    int X, Y, M, N;

    // Digita��o do valor desejado para instru��o pr�-fixada
    printf("Digite o inteiro desejado: ");
    scanf("%d", &X);
    printf("\n");

    Y = ++X;
    printf("X = %d \n", X);
    printf("Y = %d \n", Y);

    // Digita��o do valor desejado para instru��o p�s-fixada
    printf("\nDigite o inteiro desejado: ");
    scanf("%d", &M);
    printf("\n");

    N = M++;
    printf("M = %d \n", M);
    printf("N = %d \n", N);
}
