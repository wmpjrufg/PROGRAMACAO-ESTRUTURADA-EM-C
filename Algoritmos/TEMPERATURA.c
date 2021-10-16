#include <stdio.h>

main()
{
    // Declarando as variáveis como float
    float CELSIUS, FAHRENHEIT;
    // Solicitando a digitação da temperatura em Celsius
    printf("Digite a temperatura em Celsius (°C): ");
    scanf("%f" , &CELSIUS);
    // Conversão
    FAHRENHEIT = (CELSIUS * 9 / 5) + 32;
    printf("\n A Temperatura em %.2f °C corresponde a temperatura de %.2f °F\n", CELSIUS, FAHRENHEIT);
}
