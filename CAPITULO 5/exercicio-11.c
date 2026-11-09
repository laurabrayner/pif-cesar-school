#include <stdio.h>

int ehPar(int n);

int main() {
    int n;

    printf("Digite um numero: ");
    scanf("%d", &n);

    if (ehPar(n)) {
        printf("%d eh par\n", n);
    } else {
        printf("%d eh impar\n", n);
    }

    return 0;
}

int ehPar(int n) {
    if (n % 2 == 0) {
        return 1;
    }
    return 0;
}
