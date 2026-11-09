#include <stdio.h>

long potencia(int base, int expoente);

int main() {
    int base, expoente;

    printf("Digite a base: ");
    scanf("%d", &base);
    printf("Digite o expoente: ");
    scanf("%d", &expoente);

    if (expoente < 0) {
        printf("O expoente nao pode ser negativo!\n");
    } else {
        printf("Resultado: %ld\n", potencia(base, expoente));
    }

    return 0;
}

long potencia(int base, int expoente) {
    if (expoente == 0) { // caso base
        return 1;
    }
    return base * potencia(base, expoente - 1); // passo recursivo
}
