#include <stdio.h>

int main() {
    float valor_produto, imposto, preco_final;
    int estado;

    printf("Digite o valor do produto (R$): ");
    scanf("%f", &valor_produto);

    if (valor_produto <= 0.0f) {
        printf("Erro: O valor do produto deve ser maior que zero.\n");
        return 1;
    }

    printf("\nEstados de Destino:\n");
    printf(" [1] MG - 7%%\n [2] SP - 12%%\n [3] RJ - 15%%\n [4] MS - 8%%\n");
    printf("Digite o código do estado (1 a 4): ");
    scanf("%d", &estado);

    switch (estado) {
        case 1: 
            imposto = valor_produto * 0.07f;
            break;
        case 2: 
            imposto = valor_produto * 0.12f;
            break;
        case 3: 
            imposto = valor_produto * 0.15f;
            break;
        case 4: 
            imposto = valor_produto * 0.08f;
            break;
        default:
            printf("Erro: Código de estado inválido!\n");
            return 1;
    }

    preco_final = valor_produto + imposto;

    printf("\n--- Resumo do Cálculo ---\n");
    printf("Valor do Produto: R$ %.2f\n", valor_produto);
    printf("Valor do Imposto: R$ %.2f\n", imposto);
    printf("Preço Final com Imposto: R$ %.2f\n", preco_final);

    return 0;
}