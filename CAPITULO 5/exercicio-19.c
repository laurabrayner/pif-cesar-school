#include <stdio.h>

void contagem(int n);
void contagemCrescente(int n);

int main() {
    int n;

    printf("Digite um numero positivo: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("O numero precisa ser positivo!\n");
        return 1;
    }

    contagem(n);
    printf("\n");
    contagemCrescente(n);

    return 0;
}

void contagem(int n) {
    if (n == 0) {
        printf("Fogo!\n");
        return;
    }
    printf("%d\n", n);
    contagem(n - 1);
}

// aqui a chamada vem antes do printf, entao ele so imprime quando as chamadas voltam (de 1 ate n)
// na primeira versao o printf vem antes, entao imprime na ida (de n ate 1)
void contagemCrescente(int n) {
    if (n == 0) {
        return;
    }
    contagemCrescente(n - 1);
    printf("%d\n", n);
}
