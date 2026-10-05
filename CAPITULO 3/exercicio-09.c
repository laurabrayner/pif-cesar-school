#include <stdio.h>

int main() {
    float valor;
    float soma = 0.0;
    int quantidade = 0;

    printf("Digite um valor real positivo (ou um número negativo para parar): ");
    scanf("%f", &valor);

    while (valor >= 0) {
        soma += valor;
        quantidade++;

   
        printf("Digite um valor real positivo (ou um número negativo para parar): ");
        scanf("%f", &valor);
    }


    printf("Quantidade de valores validos: %d\n", quantidade);
    printf("Soma total: %.2f\n", soma);


    quantidade > 0 
        ? printf("Media aritmetica: %.2f\n", soma / quantidade)
        : printf("Nenhum valor válido foi inserido para calcular a média.\n");

    return 0;
}