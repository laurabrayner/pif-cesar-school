#include <stdio.h>

long fatorialIterativo(int n);
long fatorialRecursivo(int n);

int main() {
    int n;
    long it, rec;

    printf("Digite um numero nao negativo: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Numero invalido!\n");
        return 1;
    }

    it = fatorialIterativo(n);
    rec = fatorialRecursivo(n);

    printf("Iterativo: %ld\n", it);
    printf("Recursivo: %ld\n", rec);

    if (it == rec) {
        printf("Os resultados coincidem\n");
    } else {
        printf("Os resultados nao coincidem\n");
    }

    return 0;
}

long fatorialIterativo(int n) {
    long fat = 1;
    for (int i = 2; i <= n; i++) {
        fat *= i;
    }
    return fat;
}

long fatorialRecursivo(int n) {
    if (n == 0) {
        return 1;
    }
    return n * fatorialRecursivo(n - 1);
}
