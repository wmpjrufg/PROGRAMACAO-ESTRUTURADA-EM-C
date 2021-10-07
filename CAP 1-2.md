## O primeiro programa em C

<p align="justify">O primeiro programa será a construção do <b>Oi mundo</b>. Para escrever isso em tela vamos empregar a função de impresão existente em diversas linguagens, no C especificamente está função possui a seguinte sintaxe: <font face="Courier New"><b>printf</b></font>. Para construir este programa vamos emprega a biblioteca padrão da linguagem C <b><i>stdio.h</i></b> <i>(standard input-output header)</i>. Portanto o programa ficará no seguinte formato:</p>

```C
#include <stdio.h>

main()
{
    printf("Oi mundo!");
}
```
<p align="justify">A sintaxe <font face="Courier New"><b>main(){...}</b></font> representa uma função principal na linguagem C. Esta função controla o funcionamento de um determinado algoritmo.</p>

<p align="justify">Caso seja necessário colocar algum comentário no seu primeiro programa utilize a sintaxe <font face="Courier New"><b>//</b></font> ou sintaxe <font face="Courier New"><b>/* ... */</b></font>. Vejamos o exemplo abaixo:</p>

```C
#include <stdio.h>

main()
{
    /* Linha de comentário em bloco
    Veja que todos os comentários estão no bloco
    */
    
    // Linha de comentário
    printf("Oi mundo!");
}
```
<p align="justify">Outra sintaxe interessante é a quebra de linha na função de impressão (<font face="Courier New"><b>\n</b></font>). Isto permitirá que o usuário faça uma quebra de linha quando fizer a impressão. Veja o exemplo:</p>

```C
#include <stdio.h>

main()
{
    printf("Oi mundo! \n Seja bem vindo ao estudo de programação estruturada com linguagem C.");
}
```
