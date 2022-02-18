<script src='https://cdnjs.cloudflare.com/ajax/libs/mathjax/2.7.4/MathJax.js?config=default'></script>

## Operações aritméticas, lógicas e relacionais no C 

<p align="justify">A linguagem C possui as mesmas características de operadores vistos na disciplina de algoritmos e programação de computadores. Portanto veremos agora os modelos para aplicação desses operadores na linguagem C.</p>

### Operadores aritméticos

<p align="justify">Os operadores aritméticos pode ser visto na tabela abaixo:</p>

<table>
<thead>
  <tr>
    <th>Operador</th>
    <th>Descrição</th>
    <th>Prioridade</th>
  </tr>
</thead>
<tbody>
  <tr>
    <td>+</td>
    <td>Mais unário</td>
    <td>0 <br></td>
  </tr>
  <tr>
    <td>-</td>
    <td>Menos unário</td>
    <td>0</td>
  </tr>
  <tr>
    <td>++</td>
    <td>Incremento</td>
    <td>1</td>
  </tr>
  <tr>
    <td>--</td>
    <td>Decremento</td>
    <td>1</td>
  </tr>
  <tr>
    <td>*</td>
    <td>Multiplicação</td>
    <td>2</td>
  </tr>
  <tr>
    <td>/</td>
    <td>Divisão</td>
    <td>2</td>
  </tr>
  <tr>
    <td>%</td>
    <td>Resto da divisão</td>
    <td>2</td>
  </tr>
  <tr>
    <td>+</td>
    <td>Soma</td>
    <td>3</td>
  </tr>
  <tr>
    <td>-</td>
    <td>Subtração</td>
    <td>3</td>
  </tr>
</tbody>
</table>

<p align="justify">A seguir fazemos aplicações de alguns operadores para montagem de uma calculadora simplificada. Além disso utilizamos o conceito de conversão forçada (ou <i>cast</i>). Este conceito serve para fazer uma conversão de variáveis para determinados tipos. No exemplo a seguir declararemos dois números inteiros e necessitamos que o resultado seja apresentado em ponto flutuante. Para isso utilizamos uma conversão com sintaxe do tipo <code>var = (conversao) expressão</code> para converter um resultado em <b>inteiro</b> para resultado em <b>ponto flutuante</b>. Perceba na execução do código que você testa a operação <code>MODULO = X / Y</code> sem a conversão para <b>ponto flutuante</b> o resultado apresentado não estará correto. </p>

```c
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
```

<p align="justify">A seguir são apresentados dos incrementos e decrementos. O incremento pode ser pós ou pré-fixado. A diferença entre eles é que o pré-fixado incrementa a variável para depois executar a instrução e o pós-fixado executa a instrução para depois fazer o incremento da variável. Vejamos o exemplo prático:</p>

```c
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
```

### Operadores relacioanais

<p align="justify">Os operadores relacioanais pode ser visto na tabela abaixo:</p>

<table>
<thead>
  <tr>
    <th>Operador</th>
    <th>Descrição</th>
    <th>Prioridade</th>
  </tr>
</thead>
<tbody>
  <tr>
    <td>&gt;=</td>
    <td>Maior ou igual a</td>
    <td>0 <br></td>
  </tr>
  <tr>
    <td>&gt;</td>
    <td>Maior que</td>
    <td>0</td>
  </tr>
  <tr>
    <td>&lt;=</td>
    <td>Menor ou igual a</td>
    <td>0</td>
  </tr>
  <tr>
    <td>&lt;</td>
    <td>Menor que</td>
    <td>0</td>
  </tr>
  <tr>
    <td>==</td>
    <td>Igual a</td>
    <td>1</td>
  </tr>
  <tr>
    <td>!=</td>
    <td>Diferente de</td>
    <td>2</td>
  </tr>
</tbody>
</table>

<p align="justify">Abaixo podem ser vistos exemplos de operadores relacionais. O retorno inteiro <b>1</b> é do tipo verdadeiro e o retorno inteiro <b>0</b> é do tipo falso.</p>

```c
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

    // Operações relacionais em C
    printf("\n Exemplo 1: X > Y: %d", X > Y);
    printf("\n Exemplo 2: X < Y: %d", X < Y);
    printf("\n Exemplo 3: X == Y: %d", X == Y);
    printf("\n Exemplo 4: X != Y: %d", X != Y);
    printf("\n Exemplo 5: X >= Y: %d", X >= Y);
    printf("\n Exemplo 6: X <= Y: %d\n", X <= Y);
}
```

### Operadores lógicos

<p align="justify">Estes operadores definem como as relações podem ser conectadas, são três as possibilidades:</p>

<ol>
    <li><code>&&</code> - Conjunção</li>
    <li><code>||</code> - Disjunção</li>
    <li><code>!</code> - Negação</li>
</ol>
  
<p align="justify">Abaixo podem ser vistos exemplos da tabela verdade para os operadores lógicos de conjunção (<b>^</b>) e disjunção (<b>v</b>):</p>

<table>
<thead>
  <tr>
    <th>p</th>
    <th>q</th>
    <th>p ^ q</th>
  </tr>
</thead>
<tbody>
  <tr>
    <td>V</td>
    <td>V</td>
    <td>V</td>
  </tr>
  <tr>
    <td>V</td>
    <td>F</td>
    <td>F</td>
  </tr>
  <tr>
    <td>F</td>
    <td>V</td>
    <td>F</td>
  </tr>
  <tr>
    <td>F</td>
    <td>F</td>
    <td>F</td>
  </tr>
</tbody>
</table>

<br>

<table>
<thead>
  <tr>
    <th>p</th>
    <th>q</th>
    <th>p v q</th>
  </tr>
</thead>
<tbody>
  <tr>
    <td>V</td>
    <td>V</td>
    <td>V</td>
  </tr>
  <tr>
    <td>V</td>
    <td>F</td>
    <td>V</td>
  </tr>
  <tr>
    <td>F</td>
    <td>V</td>
    <td>V</td>
  </tr>
  <tr>
    <td>F</td>
    <td>F</td>
    <td>F</td>
  </tr>
</tbody>
</table>

<p align="justify">Abaixo podem ser vistos exemplos de aplicações dos operadores lógicos.</p>
  
```c
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
```
