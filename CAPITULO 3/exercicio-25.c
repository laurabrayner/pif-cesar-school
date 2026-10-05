#include <stdio.h>

int main() {
    int n;
    int divisores = 0;

    printf("Digite um numero inteiro positivo (N): ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Por favor, insira um numero inteiro positivo maior que zero.\n");
        return 1;
    }

    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            divisores++;
        }
    }

    printf("\nQuantidade de divisores encontrados: %d\n", divisores);

    if (n > 1 && divisores == 2) {
        printf("O numero %d E PRIMO.\n", n);
    } else {
        printf("O numero %d NAO E PRIMO.\n", n);
    }

    return 0;
}