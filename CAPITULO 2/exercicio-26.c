#include <stdio.h>

int main() {
    float comprimento, largura, preco_metro;
    float perimetro, total_arame, custo_total;

    printf("Digite o comprimento do terreno (em metros): ");
    scanf("%f", &comprimento);

    printf("Digite a largura do terreno (em metros): ");
    scanf("%f", &largura);

    printf("Digite o preco por metro do arame farpado (R$): ");
    scanf("%f", &preco_metro);

    perimetro = 2 * (comprimento + largura);

    total_arame = perimetro * 3;

    custo_total = total_arame * preco_metro;

    printf("\n--- Orcamento de Cercamento ---\n");
    printf("Total de arame necessario: %.2f metros\n", total_arame);
    printf("Custo total do cercamento: R$ %.2f\n", custo_total);

    return 0;
}