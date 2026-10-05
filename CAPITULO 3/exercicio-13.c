#include <stdio.h>

int main() {
    int N, i;
    long long int fatorial = 1;

    printf("Digite um número inteiro: ");
    scanf("%d", &N);

   
    for (i = 1; i <= N; i++) {
        fatorial *= i;
    }

    (N < 0)
        ? printf("Erro: Não existe fatorial para números negativos.\n")
        : printf("%d! = %lld\n", N, fatorial);

    return 0;
}