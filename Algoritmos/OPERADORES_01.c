#include <stdio.h>

void main ()
{
    // Declarando as variáveis
    int X, Y, SOMA, SUBTRACAO;
    float MODULO, DIVISAO, MULTIPLICACAO;

    X = 69;
    Y = 24;

    // Fazendo as operações
    SOMA = X + Y;
    SUBTRACAO = X - Y;

    // Usando a conversão de linguguagem (ou casting)
    DIVISAO = (float) X / Y;
    MULTIPLICACAO = X * Y;
    MODULO = X % Y;

    // Impressões
    printf("%d + %d = %d \n", X, Y, SOMA);
    printf("%d - %d = %d \n", X, Y, SUBTRACAO);
    printf("%d / %d = %f \n", X, Y, DIVISAO);
    printf("%d * %d = %f \n", X, Y, MULTIPLICACAO);
    printf("%d mod %d = %f \n", X, Y, MODULO);
}
