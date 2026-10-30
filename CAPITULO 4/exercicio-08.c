#include <stdio.h>

int main() {
    int ano;

    printf("Digite um ano (inteiro positivo): ");
    scanf("%d", &ano);

    if (ano <= 0) {
        printf("Ano invalido. Insira um número inteiro positivo.\n");
        return 1;
    }
    if ((ano % 400 == 0) || (ano % 4 == 0 && ano % 100 != 0)) {
        printf("O ano %d E bissexto.\n", ano);
    } else {
        printf("O ano %d NAO e bissexto.\n", ano);
    }

    return 0;
}