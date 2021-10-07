## O primeiro programa em C

<p align="justify">O primeiro programa será a construção do <b>Olá mundo</b>. Para escrever isso em tela vamos empregar a função print que existe em diversas linguagens, no C especificamente está função possui a seguinte sintaxe: <font face="Courier New"><b>printf</b></font>. Para construir este programa vamos emprega a biblioteca padrão da linguagem C <b><i>stdio.h</i></b> <i>(standard input-output header)</i>. Portanto o programa ficará no seguinte formato:</p>

```C
#include <stdio.h>

main()
{
    printf("Olá mundo!");
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
    printf("Hello, World!");
}
```
