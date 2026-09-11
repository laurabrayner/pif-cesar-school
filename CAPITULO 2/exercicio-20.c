#include <stdio.h>
#include <math.h>

int main() {
    double lado_a, lado_b, hipotenusa;

    printf("Digite o valor do primeiro cateto (lado_a): ");
    scanf("%lf", &lado_a);

    printf("Digite o valor do segundo cateto (lado_b): ");
    scanf("%lf", &lado_b);

    hipotenusa = sqrt(pow(lado_a, 2) + pow(lado_b, 2));

    // Exibicao do resultado
    printf("O comprimento da hipotenusa eh: %.2lf\n", hipotenusa);

    return 0;
}