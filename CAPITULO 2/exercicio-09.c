#include <stdio.h>

int main() {
    int num1, num2;

    printf("Digite o primeiro número inteiro: ");
    scanf("%d", &num1);

    printf("Digite o segundo número inteiro: ");
    scanf("%d", &num2);

    int soma = num1 + num2;
    int subtracao = num1 - num2;
    int multiplicacao = num1 * num2;

    float divisao = (float)num1 / num2;

    printf("\n--- Resultados ---\n");
    printf("Soma: %d\n", soma);
    printf("Subtração: %d\n", subtracao);
    printf("Multiplicação: %d\n", multiplicacao);
    printf("Divisão real: %.2f\n", divisao);

    /*
     * TRATAMENTO DE DIVISÃO POR ZERO COM CURTO-CIRCUITO LÓGICO:
     * 
     * 1. No operador '&&' (E):
     *    Se o lado esquerdo for FALSO (0), o C cancela a execução e NEM
     *    AVALIA o lado direito, pois o resultado final já será falso.
     * 
     * 2. Na prática:
     *    (num2 != 0) && printf(...);
     *    - Se num2 != 0 for VERDADEIRO (1) -> Ele executa o printf do lado direito.
     *    - Se num2 != 0 for FALSO (0)      -> Ele ignora o printf e pula a linha.
     */

    return 0;
}