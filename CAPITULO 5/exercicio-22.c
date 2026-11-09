#include <stdio.h>
#include "areas.h"

void mostraAreas(float raio, float base, float altura);

int main() {
    float raio, base, altura;

    printf("Digite o raio do circulo: ");
    scanf("%f", &raio);
    printf("Digite a base: ");
    scanf("%f", &base);
    printf("Digite a altura: ");
    scanf("%f", &altura);

    mostraAreas(raio, base, altura);

    return 0;
}

void mostraAreas(float raio, float base, float altura) {
    printf("Area do circulo: %.2f\n", A_CIRC(raio));
    printf("Area do retangulo: %.2f\n", A_RET(base, altura));
    printf("Area do triangulo: %.2f\n", A_TRI(base, altura));
}
