<script src='https://cdnjs.cloudflare.com/ajax/libs/mathjax/2.7.4/MathJax.js?config=default'></script>

## Operações aritméticas, lógicas e relacionais no C 

<p align="justify">A linguagem C possui as mesmas características de operadores aprendidos na disciplina de algoritmos e programação de computadores. Portanto veremos agora os modelos para aplicação desses operadores na linguagem C.</p>

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

<p align="justify">A seguir fazemos aplicações de alguns operadores para montagem de uma calculadora simplificada. Além disso utilizamos o conceito de conversão forçada (ou <i>cast</i>). Este conceito serve paraq fazer uma conversão de variáveis para determinados tipos. No exemplo a seguir declararemos dois números inteiros e necessitamos que o resultado seja apresentado em ponto flutuante. Para isso utilizamos uma conversão com sintaxe do tipo <code>(conversao) expressão</code> para converter um resultado em <b>inteiro</b> para resultado em <b>ponto flutuante</b>. Perceba na execução do código que você testa a operação <code>MODULO = X / Y</code> sem a conversão para <b>ponto flutuante</b> o resultado apresentado não estará correto. </p>

```C
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

### Operadores lógicos

<p align="justify">Estes operadores definem como as relações podem ser conectadas, são três as possibilidades:</p>

<ol>
    <li><code>&&</code> - Conjunção</li>
    <li><code>||</code> - Disjunção</li>
    <li><code>!</code> - Negação</li>
<ol>
