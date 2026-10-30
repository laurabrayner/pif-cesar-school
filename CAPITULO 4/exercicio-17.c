#include <stdio.h>

int main() {
    double valor_total, valor_final, valor_parcela, comissao;
    int opcao;

    printf("Digite o valor total da compra (R$): ");
    scanf("%lf", &valor_total);

    if (valor_total <= 0.0) {
        printf("Erro: O valor da compra deve ser maior que zero.\n");
        return 1;
    }

    printf("\nOpçoes de Pagamento:\n");
    printf(" [1] A Vista (com 10%% de desconto)\n");
    printf(" [2] Parcelado em 3x sem juros\n");
    printf("Escolha a opção (1 ou 2): ");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1:
    
            valor_final = valor_total * 0.90;
            comissao = valor_final * 0.05;

            printf("\n--- Resumo da Venda (À Vista) ---\n");
            printf("Valor com desconto (10%%): R$ %.2lf\n", valor_final);
            printf("Comissão do vendedor: R$ %.2lf\n", comissao);
            break;

        case 2:
         
            valor_parcela = valor_total / 3.0;
            comissao = valor_total * 0.05;

            printf("\n--- Resumo da Venda (Parcelado 3x) ---\n");
            printf("Valor de cada parcela (3x): R$ %.2lf\n", valor_parcela);
            printf("Comissão do vendedor: R$ %.2lf\n", comissao);
            break;

        default:
            printf("\nErro: Opção de pagamento inválida!\n");
            break;
    }

    return 0;
}