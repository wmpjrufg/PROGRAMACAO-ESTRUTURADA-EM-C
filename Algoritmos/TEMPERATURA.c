#include <stdio.h>

main()
{
    // Declarando as vari�veis como float
    float CELSIUS, FAHRENHEIT;
    // Solicitando a digita��o da temperatura em Celsius
    printf("Digite a temperatura em Celsius (�C): ");
    scanf("%f" , &CELSIUS);
    // Convers�o
    FAHRENHEIT = (CELSIUS * 9 / 5) + 32;
    printf("\n A Temperatura em %.2f �C corresponde a temperatura de %.2f �F\n", CELSIUS, FAHRENHEIT);
}
