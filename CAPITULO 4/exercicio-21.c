#include <stdio.h>

int main() {
    double salario_atual, aumento, novo_salario;
    double percentual = 0.0;
    int codigo;

    printf("Digite o salario atual (R$): ");
    scanf("%lf", &salario_atual);

    if (salario_atual <= 0.0) {
        printf("Erro: O salario deve ser maior que zero.\n");
        return 1;
    }

    printf("\nCargos Disponiveis:\n");
    printf(" [1] Tecnico\n [2] Gerente\n [3] Demais Cargos\n");
    printf("Digite o codigo do cargo: ");
    scanf("%d", &codigo);

    switch (codigo) {
        case 1: 
            if (salario_atual <= 3000.0) {
                percentual = 0.15; 
            } else {
                percentual = 0.10; 
            }
            break;

        case 2:
            if (salario_atual <= 5000.0) {
                percentual = 0.10; 
            } else {
                percentual = 0.05; 
            }
            break;

        case 3: 
            percentual = 0.08; 
            break;

        default:
            printf("Erro: Codigo de cargo invalido!\n");
            return 1;
    }

    aumento = salario_atual * percentual;
    novo_salario = salario_atual + aumento;

    printf("\n--- Resumo do Reajuste ---\n");
    printf("Salario Atual: R$ %.2lf\n", salario_atual);
    printf("Percentual Aplicado: %.0lf%%\n", percentual * 100.0);
    printf("Valor do Aumento: R$ %.2lf\n", aumento);
    printf("Novo Salario: R$ %.2lf\n", novo_salario);

    return 0;
}