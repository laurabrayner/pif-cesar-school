#include <stdio.h>

int main() {
    float horas_normais, horas_extras;
    float salario_bruto, imposto;

    printf("Digite o total de horas normais trabalhadas no ano: ");
    scanf("%f", &horas_normais);

    printf("Digite o total de horas extras trabalhadas no ano: ");
    scanf("%f", &horas_extras);

    salario_bruto = (horas_normais * 10.0f) + (horas_extras * 15.0f);
    imposto = (salario_bruto > 12000.0f) ? (salario_bruto - 12000.0f) * 0.10f : 0.0f;

    printf("\n--- Demonstrativo Anual ---\n");
    printf("a) Salario anual bruto: R$ %.2f\n", salario_bruto);
    printf("b) Imposto retido devido: R$ %.2f\n", imposto);

    return 0;
}