<script src='https://cdnjs.cloudflare.com/ajax/libs/mathjax/2.7.4/MathJax.js?config=default'></script>

## Operações aritméticas, lógicas e relacionais no C 

<p align="justify">A linguagem C possui as mesmas características de operadores aprendidos na disciplina de algoritmos e programação de computadores. Portanto veremos agora os modelos para aplicação desses operadores na linguagem C.</p>

## Operações aritméticas

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
<p align="justify">Veja que neste exemplo empregamos a função <code>scanf</code> que é utilizada para leitura de um dado digitado via teclado pelo usuário. Perceba que a sintaxe para leitura de um float <code>%f</code>. Além disso a variável é atribuída na variável <code>CELSIUS</code> através da sintaxe <code>&CELSIUS</code>.</p>

### Outras particularidas de variáveis e a função main()

<p align="justify">Existem outras particularidades em relação a função <code>main</code> ou funções em geral. Por exemplo é possível utilizar dentro da função <code>main</code> a instrução <code>return</code>. Esta instrução ela encerra uma determina função e retorna o controle a função de chamada. Além disso essa instrução pode devolver também um determinado valor na linha de comando, vejamos o exemplo da soma de dois números digitados pelo usuário. Perceba que ao compilar o algoritmo aprecerá na tela o valor da soma.</p>

```C
#include <stdio.h>

int main()
{
    int A, B, C;
    printf("Digite o valor de A: ");
    scanf("%d", &A);
    printf("\n");
    printf("Digite o valor de B: ");
    scanf("%d", &B);
    C = A + B;
    return C;
}
```
<p align="justify">Percebam que antes da sintaxe <code>main</code> colocamos a instrução <code>int</code>. Esta instrução permite que você retorne como saída qualquer valor inteiro.</p>

<p align="justify">Outra possibilidade interessante é a criação de alguns valores que são constantes na função. Por exemplo uma função para calcular o valor total de imposto a ser pago a partir de um salário. Imaginemos uma alíquota fixa de 27.5%.</p>

```C
#include <stdio.h>

main()
{
    float ALIQ = 27.5;
    float IMPOSTO, SALARIO;
    printf("Digite o valor do salário: ");
    scanf("%f", &SALARIO);
    printf("\n");
    IMPOSTO = SALARIO * (ALIQ / 100);
    return IMPOSTO;
}
```
<p align="justify">Caso deseja uma função que não retorne nenhum valor utilize a instrução <code>void main()</code>.</p>
