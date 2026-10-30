#include <stdio.h>

int main() {
    double a, b, c;

    printf("Digite o valor do lado A: ");
    scanf("%lf", &a);

    printf("Digite o valor do lado B: ");
    scanf("%lf", &b);

    printf("Digite o valor do lado C: ");
    scanf("%lf", &c);

    if ((a < b + c) && (b < a + c) && (c < a + b)) {
        if (a == b && b == c) {
            printf("Triângulo Equilátero\n");
        } else if (a == b || a == c || b == c) {
            printf("Triângulo Isósceles\n");
        } else {
            printf("Triângulo Escaleno\n");
        }
    } else {
        printf("Erro: Os lados fornecidos não formam um triângulo!\n");
    }

    return 0;
}