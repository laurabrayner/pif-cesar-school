#include <stdio.h>
#include <math.h>

int main() {
    char operacao;
    double num1, num2, resultado;

    printf("=== CALCULADORA ===\n");
    printf("Operacoes disponiveis:\n");
    printf(" [+] Soma\n [-] Subtracao\n [*] Multiplicacao\n [/] Divisao\n [^] Potenciacao\n");
    printf("Escolha a operacao: ");
    scanf(" %c", &operacao);

    printf("Digite o primeiro numero: ");
    scanf("%lf", &num1);

    printf("Digite o segundo numero: ");
    scanf("%lf", &num2);

    switch (operacao) {
        case '+':
            resultado = num1 + num2;
            printf("Resultado: %.2lf + %.2lf = %.2lf\n", num1, num2, resultado);
            break;

        case '-':
            resultado = num1 - num2;
            printf("Resultado: %.2lf - %.2lf = %.2lf\n", num1, num2, resultado);
            break;

        case '*':
            resultado = num1 * num2;
            printf("Resultado: %.2lf * %.2lf = %.2lf\n", num1, num2, resultado);
            break;

        case '/':
            if (num2 == 0.0) {
                printf("Erro: Divisao por zero nao e permitida!\n");
            } else {
                resultado = num1 / num2;
                printf("Resultado: %.2lf / %.2lf = %.2lf\n", num1, num2, resultado);
            }
            break;

        case '^':
            resultado = pow(num1, num2);
            printf("Resultado: %.2lf ^ %.2lf = %.2lf\n", num1, num2, resultado);
            break;

        default:
            printf("Erro: Operacao '%c' e invalida!\n", operacao);
            break;
    }

    return 0;
}