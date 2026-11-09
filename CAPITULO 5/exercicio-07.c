#include <stdio.h>

int soma(int a, int b);

int main() {
    int a, b;

    printf("Digite o primeiro numero: ");
    scanf("%d", &a);
    printf("Digite o segundo numero: ");
    scanf("%d", &b);

    printf("Soma: %d\n", soma(a, b));

    return 0;
}

int soma(int a, int b) {
    return a + b;
}
