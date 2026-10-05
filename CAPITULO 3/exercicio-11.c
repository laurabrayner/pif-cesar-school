#include <stdio.h>

int main() {
    int A, B, i;

    printf("Digite o valor de A: ");
    scanf("%d", &A);

    printf("Digite o valor de B: ");
    scanf("%d", &B);

    printf("\nIntervalo de %d ate %d:\n", A, B);

  
    int passo = (A <= B) ? 1 : -1;

    
    for (i = A; i * passo <= B * passo; i += passo) {
        printf("%d ", i);
    }

    printf("\n");

    return 0;
}