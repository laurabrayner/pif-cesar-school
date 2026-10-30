#include <stdio.h>

int main() {
    int opcao;

    printf("=== ATENDIMENTO AUTOMÁTICO BANCÁRIO ===\n");
    printf("1 - Consultar Saldo\n");
    printf("2 - Efetuar Extrato\n");
    printf("3 - Fazer Transferência\n");
    printf("4 - Falar com Atendente\n");
    printf("Escolha uma opção (1 a 4): ");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1:
            printf("\n[Saldo] Você escolheu a opção Consultar Saldo. Redirecionando...\n");
            break;
        case 2:
            printf("\n[Extrato] Você escolheu a opção Efetuar Extrato. Gerando relatório...\n");
            break;
        case 3:
            printf("\n[Transferência] Você escolheu a opção Fazer Transferência. Redirecionando...\n");
            break;
        case 4:
            printf("\n[Atendimento] Aguarde um momento enquanto transferimos para um de nossos atendentes.\n");
            break;
        default:
            printf("\nErro: Opção inválida! Por favor, selecione um número de 1 a 4.\n");
            break;
    }

    return 0;
}