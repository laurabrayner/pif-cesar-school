## Questão 08 

### Código

```c
#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("\n\t\"Primeiro programa\"");
    system("PAUSE");
    return 0;
}
```

### Saída Gerada

```
"Primeiro programa"Pressione qualquer tecla para continuar. . .
```

### Explicação

O que acontece é: inicialmente as bibliotecas são chamadas, logo depois a função `main` é chamada, então colocamos o `printf` para mostrar a mensagem e o `system PAUSE` para que tenhamos que apertar em alguma tecla pra continuar o programa.