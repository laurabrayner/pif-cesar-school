#include <stdio.h>

int main() {
    float distancia, litros, consumo;

    printf("Digite a distância percorrida (em km): ");
    scanf("%f", &distancia);

    printf("Digite a quantidade de combustível consumido (em litros): ");
    scanf("%f", &litros);

    if (litros <= 0.0f || distancia < 0.0f) {
        printf("Erro: A quantidade de litros deve ser maior que zero e a distância não pode ser negativa.\n");
        return 1;
    }

    consumo = distancia / litros;

    printf("\nConsumo calculado: %.2f km/l\n", consumo);

    if (consumo < 8.0f) {
        printf("Classificação: Venda o carro!\n");
    } else if (consumo <= 14.0f) {
        printf("Classificação: Econômico!\n");
    } else {
        printf("Classificação: Super econômico!\n");
    }

    return 0;
}