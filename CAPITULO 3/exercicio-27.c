#include <stdio.h>

int main() {
    int valor, valor_restante;
    int c100 = 0, c50 = 0, c20 = 0, c10 = 0, c5 = 0, c2 = 0;

    printf("Digite o valor do saque em reais: R$ ");
    scanf("%d", &valor);

    if (valor <= 0) {
        printf("Valor invalido! Por favor, insira um valor inteiro positivo.\n");
        return 1;
    }

    valor_restante = valor;


    while (valor_restante >= 100) {
        c100++;
        valor_restante -= 100;
    }

    while (valor_restante >= 50) {
        c50++;
        valor_restante -= 50;
    }

    while (valor_restante >= 20) {
        c20++;
        valor_restante -= 20;
    }

    while (valor_restante >= 10) {
        c10++;
        valor_restante -= 10;
    }

    while (valor_restante >= 5) {
        c5++;
        valor_restante -= 5;
    }

    while (valor_restante >= 2) {
        c2++;
        valor_restante -= 2;
    }

    if (c100 > 0) printf("Cedulas de R$ 100: %d\n", c100);
    if (c50 > 0)  printf("Cedulas de R$ 50 : %d\n", c50);
    if (c20 > 0)  printf("Cedulas de R$ 20 : %d\n", c20);
    if (c10 > 0)  printf("Cedulas de R$ 10 : %d\n", c10);
    if (c5 > 0)   printf("Cedulas de R$ 5  : %d\n", c5);
    if (c2 > 0)   printf("Cedulas de R$ 2  : %d\n", c2);


    if (valor_restante > 0) {
        printf("\nAtencao: R$ %d nao puderam ser entregues com as cedulas disponiveis.\n", valor_restante);
    }

    return 0;
}