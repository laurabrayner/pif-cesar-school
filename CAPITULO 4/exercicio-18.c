#include <stdio.h>

int main() {
    int opcao;
    double temp_entrada, temp_convertida;

    printf("=== CONVERSOR DE TEMPERATURA ===\n");
    printf("1. Celsius para Fahrenheit\n");
    printf("2. Celsius para Kelvin\n");
    printf("3. Fahrenheit para Celsius\n");
    printf("4. Kelvin para Celsius\n");
    printf("Escolha uma opcao (1 a 4): ");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1:
            printf("Digite a temperatura em Celsius (°C): ");
            scanf("%lf", &temp_entrada);
            temp_convertida = temp_entrada * 1.8 + 32.0;
            printf("Resultado: %.2lf °C = %.2lf °F\n", temp_entrada, temp_convertida);
            break;

        case 2:
            printf("Digite a temperatura em Celsius (°C): ");
            scanf("%lf", &temp_entrada);
            temp_convertida = temp_entrada + 273.15;
            printf("Resultado: %.2lf °C = %.2lf K\n", temp_entrada, temp_convertida);
            break;

        case 3:
            printf("Digite a temperatura em Fahrenheit (°F): ");
            scanf("%lf", &temp_entrada);
            temp_convertida = (temp_entrada - 32.0) / 1.8;
            printf("Resultado: %.2lf °F = %.2lf °C\n", temp_entrada, temp_convertida);
            break;

        case 4:
            printf("Digite a temperatura em Kelvin (K): ");
            scanf("%lf", &temp_entrada);
            temp_convertida = temp_entrada - 273.15;
            printf("Resultado: %.2lf K = %.2lf °C\n", temp_entrada, temp_convertida);
            break;

        default:
            printf("Erro: Opcao invalida! Digite um valor de 1 a 4.\n");
            break;
    }

    return 0;
}