#include <stdio.h>

float calculaSubtotal(float preco, int quantidade);
float aplicaDesconto(float valor, int opcaoPagamento);
float calculaTroco(float total, float pago);

int main() {
    float preco, pago, subtotal, total;
    int quantidade, opcao;

    printf("Digite o preco: ");
    scanf("%f", &preco);
    printf("Digite a quantidade: ");
    scanf("%d", &quantidade);
    printf("Forma de pagamento (1 - a vista / 2 - cartao): ");
    scanf("%d", &opcao);
    printf("Digite o valor pago: ");
    scanf("%f", &pago);

    subtotal = calculaSubtotal(preco, quantidade);
    total = aplicaDesconto(subtotal, opcao);

    printf("Subtotal: R$ %.2f\n", subtotal);
    printf("Total a pagar: R$ %.2f\n", total);

    if (pago < total) {
        printf("Valor pago insuficiente!\n");
    } else {
        printf("Troco: R$ %.2f\n", calculaTroco(total, pago));
    }

    return 0;
}

float calculaSubtotal(float preco, int quantidade) {
    return preco * quantidade;
}

float aplicaDesconto(float valor, int opcaoPagamento) {
    if (opcaoPagamento == 1) {
        return valor * 0.9;
    }
    return valor;
}

float calculaTroco(float total, float pago) {
    return pago - total;
}
