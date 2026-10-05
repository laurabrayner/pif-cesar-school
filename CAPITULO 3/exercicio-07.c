#include <stdio.h>

int main() {
    // 1. Versão usando o laço FOR
    printf("Contagem com FOR");
    for (int i = 0; i <= 100; i++) {
        printf("%d ", i);
    }
    printf("\n\n");

    // 2. Versão usando o laço WHILE
    printf("Contagem com WHILE\n");
    int j = 0;
    while (j <= 100) {
        printf("%d ", j);
        j++;
    }
    printf("\n\n");

    // 3. Versão usando o laço DO-WHILE
    printf("Contagem com DO-WHILE\n");
    int k = 0;
    do {
        printf("%d ", k);
        k++;
    } while (k <= 100);
    printf("\n\n");

    return 0;
}

/*
================================================================================
 RESPOSTA DA QUESTÃO: Qual das três estruturas é a mais adequada e por quê?
================================================================================
 A estrutura mais adequada para este caso é o laço 'for'.

 Motivo:
 O laço 'for' é ideal quando já sabemos exatamente quantas vezes a repetição 
 deve acontecer (neste caso, 101 vezes, do 0 até o 100).
 
 Ele permite declarar a variável, colocar a condição e fazer o incremento 
 em uma única linha: `for (int i = 0; i <= 100; i++)`. Isso deixa o código mais 
 limpo e evita o risco de esquecer de incrementar a variável (o que causaria 
 um loop infinito).
================================================================================
*/