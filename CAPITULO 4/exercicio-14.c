#include <stdio.h>

int main() {
    float nota;
    int faltas;
    char conceito;

    printf("Digite a nota do estudante (0.0 a 10.0): ");
    scanf("%f", &nota);

    printf("Digite a quantidade de faltas: ");
    scanf("%d", &faltas);

    if (nota < 0.0f || nota > 10.0f || faltas < 0) {
        printf("Erro: Nota ou quantidade de faltas invalida!\n");
        return 1;
    }

    if (nota >= 9.0f) {
        if (faltas <= 20) {
            conceito = 'A';
        } else {
            conceito = 'B';
        }
    } else if (nota >= 7.5f) {
        if (faltas <= 20) {
            conceito = 'B';
        } else {
            conceito = 'C';
        }
    } else if (nota >= 5.0f) {
        if (faltas <= 20) {
            conceito = 'C';
        } else {
            conceito = 'D';
        }
    } else if (nota >= 4.0f) {
        if (faltas <= 20) {
            conceito = 'D';
        } else {
            conceito = 'E';
        }
    } else {
        conceito = 'E';
    }

    printf("\n--- Resultado Final ---\n");
    printf("Nota: %.1f\n", nota);
    printf("Faltas: %d\n", faltas);
    printf("Conceito: %c\n", conceito);

    return 0;
}