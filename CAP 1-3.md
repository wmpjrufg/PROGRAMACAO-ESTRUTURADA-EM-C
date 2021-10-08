<script src='https://cdnjs.cloudflare.com/ajax/libs/mathjax/2.7.4/MathJax.js?config=default'></script>

## As variáveis no C

<p align="justify">As variáveis são espaços na memória do computador onde o usuário poderá armazenar um dado. Não entraremos no mérito de como a arquitetura do computador funciona em relação a linguagem por equanto. São exemplos de variáveis na linguagem C:</p>

<ol type="a">
<li><p align="justify">char: Guarda um caracter;</p></li>
<li><p align="justify">int: Guarda um número inteiro;</p></li>
<li><p align="justify">float: Guarda um número real com certa precisão;</p></li>
<li><p align="justify">double: Guarda um número real com precisão maior que float;</p></li>
<li><p align="justify">void: Tipo vazio.</p></li>
</ol>

<p align="justify">Agora vamos criar um algoritmo que converte a temperatura de graus <i>Celsius</i> para graus <i>Fahrenheit</i>.</p>

$$ T_{°F} =\frac{9 . T_{°C}}{5} +32 $$

```C
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
```
<p align="justify">Veja que neste exemplo empregamos a função <font face="Courier New"><b>scanf</b></font> que é utilizada para leitura de um dado digitado via teclado pelo usuário. Perceba que a sintaxe para leitura de um float <font face="Courier New"><b>%f</b></font>. Além disso a variável é atribuída na variável <font face="Courier New"><b>CELSIUS</b></font> através da sintaxe <font face="Courier New"><b>&CELSIUS</b></font>.</p>
