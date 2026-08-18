## Questão 09 

### Código

```c
#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("%c%c%cPrimeiro programa", '\n', '\t', '\"');
    printf("%c", '\"');
    system("PAUSE");
    return 0;
}
```

### Saída Gerada

```
"Primeiro programa|Pressione qualquer tecla para continuar. . . 
```

### Explicação

As sequências `\n` e `\t` geram uma quebra de linha e uma tabulação, e `\"` imprime as aspas duplas ao redor do texto. O compilador interpreta cada sequência de escape como um único caractere para o modificador `%`.