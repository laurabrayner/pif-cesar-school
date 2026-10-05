#include <stdio.h>

int main() {
    int n;

    printf("Digite o numero do termo desejado (N): ");
    scanf("%d", &n);


    if (n <= 0) {
        printf("Por favor, insira um valor positivo maior que zero.\n");
        return 1;
    }

    long long termo1 = 1, termo2 = 1, proximo;

    printf("\nSequencia de Fibonacci ate o %d-esimo termo:\n", n);


    for (int i = 1; i <= n; i++) {
        if (i == 1) {
            printf("%lld", termo1);
        } else if (i == 2) {
            printf(", %lld", termo2);
        } else {
            proximo = termo1 + termo2; 
            printf(", %lld", proximo);
            termo1 = termo2;
            termo2 = proximo;
        }
    }


    long long enesimo = (n == 1) ? 1 : termo2;
    printf("\n\nO %d-esimo termo da sequencia e: %lld\n", n, enesimo);

    return 0;
}