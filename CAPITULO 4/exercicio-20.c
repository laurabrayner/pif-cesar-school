#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c;
    double delta, x1, x2;

    printf("Digite o coeficiente a: ");
    scanf("%lf", &a);

    if (a == 0.0) {
        printf("Erro: O coeficiente 'a' nao pode ser zero em uma equacao do segundo grau!\n");
        return 1;
    }

    printf("Digite o coeficiente b: ");
    scanf("%lf", &b);

    printf("Digite o coeficiente c: ");
    scanf("%lf", &c);

    delta = (b * b) - (4.0 * a * c);

    if (delta < 0.0) {
        printf("A equacao nao possui raizes reais.\n");
    } else if (delta == 0.0) {
        x1 = -b / (2.0 * a);
        printf("A equacao possui uma unica raiz real:\n");
        printf("x = %.2lf\n", x1);
    } else {
        x1 = (-b + sqrt(delta)) / (2.0 * a);
        x2 = (-b - sqrt(delta)) / (2.0 * a);
        printf("A equacao possui duas raizes reais distintas:\n");
        printf("x1 = %.2lf\n", x1);
        printf("x2 = %.2lf\n", x2);
    }

    return 0;
}