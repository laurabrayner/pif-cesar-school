#include <stdio.h>

long fibonacci(int n);

int main() {
    int qtd;

    printf("Digite a quantidade de termos: ");
    scanf("%d", &qtd);

    for (int i = 0; i < qtd; i++) {
        printf("%ld ", fibonacci(i));
    }
    printf("\n");

    return 0;
}

long fibonacci(int n) {
    if (n == 0) {
        return 0;
    }
    if (n == 1) {
        return 1;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}

// fica lento porque cada chamada chama a funcao mais duas vezes e varios termos
// sao calculados de novo muitas vezes, entao o numero de chamadas cresce muito rapido
