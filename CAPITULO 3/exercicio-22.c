#include <stdio.h>

int main() {
    int n;
    int numero = 1;

    printf("Digite o numero de linhas (N): ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Por favor, insira um numero inteiro positivo.\n");
        return 1;
    }

    printf("\n");

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d", numero);
            if (j < i) {
                printf(" ");
            }
            numero++;
        }
        printf("\n");
    }

    return 0;
}