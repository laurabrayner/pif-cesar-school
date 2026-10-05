#include <stdio.h>

int main() {
    int a, b;
    long long soma_primos = 0;
    int quantidade_primos = 0;

    do {
        printf("Digite o valor de A (inteiro positivo): ");
        scanf("%d", &a);
        printf("Digite o valor de B (inteiro positivo, maior que A): ");
        scanf("%d", &b);

        if (a <= 0 || b <= 0 || a >= b) {
            printf("Valores invalidos! Certifique-se de que A > 0, B > 0 e A < B.\n\n");
        }
    } while (a <= 0 || b <= 0 || a >= b);

    printf("\nNumeros primos encontrados no intervalo [%d, %d]:\n", a, b);


    for (int i = a; i <= b; i++) {
        if (i < 2) {
            continue; 
        }

        int eh_primo = 1;
        for (int j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                eh_primo = 0;
                break;
            }
        }

        if (eh_primo) {
            printf("%d ", i);
            soma_primos += i;
            quantidade_primos++;
        }
    }

    if (quantidade_primos == 0) {
        printf("Nenhum numero primo foi encontrado nesse intervalo.");
    }

   
    printf("\n\nSoma total dos numeros primos: %lld\n", soma_primos);

    return 0;
}