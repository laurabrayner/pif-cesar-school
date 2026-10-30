#include <stdio.h>

int main() {
    int horas;
    double valor_total = 0.0;

    printf("Digite o número de horas inteiras de permanência: ");
    scanf("%d", &horas);

    if (horas <= 0) {
        printf("Erro: O tempo de permanência deve ser um número inteiro positivo maiores que zero.\n");
        return 1;
    }

    if (horas <= 2) {
        valor_total = horas * 2.00;
    } else if (horas <= 4) {
        valor_total = (2 * 2.00) + ((horas - 2) * 2.50);
    } else {
        valor_total = (2 * 2.00) + (2 * 2.50) + ((horas - 4) * 3.00);
    }

    printf("\n--- Detalhamento do Ticket ---\n");
    printf("Tempo total de permanência: %d hora(s)\n", horas);
    printf("Valor total a pagar: R$ %.2lf\n", valor_total);

    return 0;
}