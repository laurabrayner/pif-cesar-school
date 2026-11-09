#include <stdio.h>

int maior(int a, int b);

int main() {
    int a, b;

    printf("Digite o primeiro numero: ");
    scanf("%d", &a);
    printf("Digite o segundo numero: ");
    scanf("%d", &b);

    printf("O maior numero eh: %d\n", maior(a, b));

    return 0;
}

int maior(int a, int b) {
    if (a > b) {
        return a;
    }
    return b;
}
