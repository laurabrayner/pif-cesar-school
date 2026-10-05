#include <stdio.h>

int main() {
    int opcao;
    float salario, novo_salario, imposto;


    do {
        printf("\n=== SISTEMA DE FOLHA DE PAGAMENTO ===\n");
        printf("1. Reajuste Salarial\n");
        printf("2. Retencao de Imposto de Renda\n");
        printf("3. Encerrar Programa\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);


        switch (opcao) {
            case 1:
                printf("\n--- Reajuste Salarial ---\n");
                printf("Digite o salario atual: R$ ");
                scanf("%f", &salario);

                if (salario <= 0) {
                    printf("Salario invalido!\n");
                } else if (salario <= 2000.00f) {
                    novo_salario = salario * 1.15f; 
                    printf("Aumento de 15%% aplicado.\n");
                    printf("Novo salario: R$ %.2f\n", novo_salario);
                } else {
                    novo_salario = salario * 1.10f; 
                    printf("Aumento de 10%% aplicado.\n");
                    printf("Novo salario: R$ %.2f\n", novo_salario);
                }
                break;

            case 2:
                printf("\n--- Retencao de Imposto de Renda ---\n");
                printf("Digite o salario bruto: R$ ");
                scanf("%f", &salario);

                if (salario <= 0) {
                    printf("Salario invalido!\n");
                } else if (salario <= 3000.00f) {
                    imposto = salario * 0.08f; 
                    printf("Aliquota de IR: 8%%\n");
                    printf("Valor do Imposto Retido: R$ %.2f\n", imposto);
                    printf("Salario Liquido: R$ %.2f\n", salario - imposto);
                } else {
                    imposto = salario * 0.15f; 
                    printf("Aliquota de IR: 15%%\n");
                    printf("Valor do Imposto Retido: R$ %.2f\n", imposto);
                    printf("Salario Liquido: R$ %.2f\n", salario - imposto);
                }
                break;

            case 3:
                printf("\nEncerrando o programa...\n");
                break;

            default:
              
                printf("\nOpcao invalida! Por favor, escolha 1, 2 ou 3.\n");
                break;
        }

    } while (opcao != 3); 

    return 0;
}