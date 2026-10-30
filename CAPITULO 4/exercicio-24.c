#include <stdio.h>

int main() {
    int angulo1, angulo2, angulo3;

    printf("Digite o primeiro ângulo: ");
    scanf("%d", &angulo1);

    printf("Digite o segundo ângulo: ");
    scanf("%d", &angulo2);

    printf("Digite o terceiro ângulo: ");
    scanf("%d", &angulo3);

    if (angulo1 > 0 && angulo2 > 0 && angulo3 > 0 && (angulo1 + angulo2 + angulo3 == 180)) {
        if (angulo1 == 90 || angulo2 == 90 || angulo3 == 90) {
            printf("Triângulo Retângulo\n");
        } else if (angulo1 > 90 || angulo2 > 90 || angulo3 > 90) {
            printf("Triângulo Obtusângulo\n");
        } else {
            printf("Triângulo Acutângulo\n");
        }
    } else {
        printf("Erro: Os ângulos fornecidos não formam um triângulo válido!\n");
    }

    return 0;
}