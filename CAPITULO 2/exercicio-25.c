#include <stdio.h>

int main() {
    float salario_base, gratificacao, imposto, salario_liquido;

    printf("Digite o salario-base do funcionario: R$ ");
    scanf("%f", &salario_base);

    gratificacao = salario_base * 0.05;

    imposto = salario_base * 0.07;

    salario_liquido = salario_base + gratificacao - imposto;

    printf("Salario-base: R$ %.2f\n", salario_base);
    printf("Gratificacao (+5%%): R$ %.2f\n", gratificacao);
    printf("Imposto (-7%%): R$ %.2f\n", imposto);
    printf("Salario liquido a receber: R$ %.2f\n", salario_liquido);

    return 0;
}

/*
      JUSTIFICATIVA ARITMÉTICA:
      - Multiplicação (*): Calcula 5% (0.05) e 7% (0.07) sobre o salário-base.
      - Adição (+) e Subtração (-): S_liquido = S_base + (S_base * 0.05) - (S_base * 0.07).
      - Simplificação: S_base * (1 + 0.05 - 0.07) = S_base * 0.98 (desconto líquido final de 2%).
     */

     