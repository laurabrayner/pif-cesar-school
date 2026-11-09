#include <stdio.h>

#define DEBUG

int somaAteN(int n);

int main() {
    int n;

    printf("Digite um numero: ");
    scanf("%d", &n);

    printf("Soma de 1 ate %d: %d\n", n, somaAteN(n));

    return 0;
}

int somaAteN(int n) {
    int soma = 0;
    for (int i = 1; i <= n; i++) {
        soma += i;
#ifdef DEBUG
        printf("i = %d, soma parcial = %d\n", i, soma);
#endif
    }
    return soma;
}

// com o #define DEBUG ele mostra a soma parcial em cada volta do for
// sem o #define DEBUG so aparece o resultado final, o printf do debug nem e compilado
