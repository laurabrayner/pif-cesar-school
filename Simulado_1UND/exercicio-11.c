#include <stdio.h>

int main() {
    float salario_dia = 45.00;
    int dias;
    float salario_bruto, gratificacao, imposto, salario_liquido;

    printf("Digite a quantidade de dias trabalhados: ");
    scanf("%d", &dias);

    salario_bruto = salario_dia * dias;
    gratificacao = salario_bruto * 0.05;  
    imposto = salario_bruto * 0.08;       
    salario_liquido = salario_bruto + gratificacao - imposto;

    printf("Dias trabalhados: %d\n", dias);
    printf("Salario Bruto:     R$ %.2f\n", salario_bruto);
    printf("(+) Gratificacao:  R$ %.2f\n", gratificacao);
    printf("(-) Imposto Renda: R$ %.2f\n", imposto);
    printf("Salario Liquido:   R$ %.2f\n", salario_liquido);

    return 0;
}