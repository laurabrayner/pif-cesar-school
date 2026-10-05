#include <stdio.h>

int main() {
    int n;

    printf("Digite uma dimensao impar N (entre 3 e 19): ");
    scanf("%d", &n);

    if (n < 3 || n > 19 || n % 2 == 0) {
        printf("Valor invalido! N deve ser um numero impar entre 3 e 19.\n");
        return 1;
    }

    printf("\n");

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {

            if (i == j || i + j == n - 1) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}