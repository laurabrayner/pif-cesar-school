#include <stdio.h>

int main() {
    int n;
    long long int fatorial = 1;

   
    do {
        printf("Digite um numero inteiro nao negativo (N): ");
        scanf("%d", &n);

       
        (n < 0) ? printf("Erro: Fatorial nao definido para numeros negativos!\n\n") : 0;

    } while (n < 0);

   
    for (int i = 1; i <= n; i++) {
        fatorial *= i;
    }


    printf("%d! = %lld\n", n, fatorial);

    return 0;
}