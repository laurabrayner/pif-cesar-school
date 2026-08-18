## Questão 04 - Correção de Sintaxe em C

### Análise dos Erros
Abaixo, os erros identificados no código original:

1. **Inclusão de Biblioteca:** Remoção do ";" indevido após "#include <stdlib.h>".
2. **Função Principal:** Correção de "Main" para "main" (case sensitive) e adição dos parênteses "()".
3. **Estrutura de Bloco:** Substituição dos parênteses "()" por chaves "{}" para delimitar o escopo da função.
4. **Comando "printf":** Adição das aspas duplas necessárias para a string de formato.
5. **Remoção de Código Incompatível:** Remoção do comando "cout" (C++) que não pertence a linguagem C.
6. **Fechamento de Escopo:** Substituição do ")" final pela chave de fechamento "}".

### Código Corrigido

#include <stdio.h>  // Biblioteca padrão para entrada e saída
#include <stdlib.h> // Biblioteca para função system

int main() {
    // Exibe a mensagem formatada na tela
    printf("Existem %d semanas no ano.\n", 52);
    
    // Pausa a execução do programa antes de fechar
    system("PAUSE");
    
    return 0; // Indica que o programa finalizou com sucesso
}