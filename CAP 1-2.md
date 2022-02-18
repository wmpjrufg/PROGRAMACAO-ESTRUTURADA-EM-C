## O primeiro programa em C

<p align="justify">O primeiro programa será a construção do <b>Oi mundo</b>. Para escrever isso em tela vamos empregar a função de impresão existente em diversas linguagens, no C especificamente está função possui a seguinte sintaxe: <code>printf</code>. Para construir este programa vamos empregar a biblioteca padrão da linguagem C <code>stdio.h</code> <i>(standard input-output header)</i>. Portanto o programa ficará no seguinte formato:</p>

```c
// ex.: 2000-000_HELLO_WORD.c
#include <stdio.h>

main()
{
    printf("Oi mundo!");
}
```
<p align="justify">A sintaxe <code>main()</code> representa uma função principal (<i>entry point</i>) na linguagem C. Esta função controla o funcionamento de um determinado algoritmo. Neste caso o bloco de código deverá ficar entre as chaves (<code>main(){// Aqui bloco de código}</code>).</p>

<p align="justify">Caso seja necessário colocar algum comentário no seu primeiro programa utilize a sintaxe <code>//</code> ou sintaxe <code>/*     */</code>. Vejamos o exemplo abaixo:</p>

```c
// ex.: 2000-001_HELLO_WORD.c
#include <stdio.h>

main()
{
    /* 
    Linha de comentário em bloco
    Veja que todos os comentários estão no bloco
    */
    
    // Linha de comentário
    printf("Oi mundo!");
}
```
<p align="justify">Outra sintaxe interessante é a quebra de linha na função de impressão (<code>\n</code>). Isto permitirá que o usuário faça uma quebra de linha quando fizer a impressão. Veja o exemplo:</p>

```c
// ex.: 2000-003_TEMPERATURA_HELLO_WORD.c
#include <stdio.h>

main()
{
    printf("Oi mundo! \n Seja bem vindo ao estudo de programação estruturada com linguagem C.");
}
```
