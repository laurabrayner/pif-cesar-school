#include <stdio.h>

int main() {
    int valor_total, valor_entregue, troco, troco_restante;
    int n100, n50, n20, n10, n5, n2;

    printf("Digite o valor total da compra (R$): ");
    scanf("%d", &valor_total);

    printf("Digite o valor entregue pelo cliente (R$): ");
    scanf("%d", &valor_entregue);

    if (valor_total <= 0 || valor_entregue <= 0) {
        printf("Erro: Os valores devem ser inteiros positivos!\n");
        return 1;
    }

    if (valor_entregue < valor_total) {
        printf("Erro: Valor entregue e insuficiente para realizar o pagamento!\n");
        return 1;
    }

    troco = valor_entregue - valor_total;
    troco_restante = troco;

    printf("\nTroco total a ser devolvido: R$ %d\n", troco);

    if (troco == 0) {
        printf("Nao ha troco a ser devolvido.\n");
        return 0;
    }

    n100 = troco_restante / 100;
    troco_restante %= 100;

    n50 = troco_restante / 50;
    troco_restante %= 50;

    n20 = troco_restante / 20;
    troco_restante %= 20;

    n10 = troco_restante / 10;
    troco_restante %= 10;

    n5 = troco_restante / 5;
    troco_restante %= 5;

    n2 = troco_restante / 2;
    troco_restante %= 2;

    printf("\nDecomposicao do troco:\n");
    if (n100 > 0) printf("- %d cedula(s) de R$ 100\n", n100);
    if (n50 > 0)  printf("- %d cedula(s) de R$ 50\n", n50);
    if (n20 > 0)  printf("- %d cedula(s) de R$ 20\n", n20);
    if (n10 > 0)  printf("- %d cedula(s) de R$ 10\n", n10);
    if (n5 > 0)   printf("- %d cedula(s) de R$ 5\n", n5);
    if (n2 > 0)   printf("- %d cedula(s) de R$ 2\n", n2);

    if (troco_restante > 0) {
        printf("Valor restante sem cedula correspondente: R$ %d\n", troco_restante);
    }

    return 0;
}