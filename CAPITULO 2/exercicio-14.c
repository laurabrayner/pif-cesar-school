#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c, p, area;

    printf("Digite o valor do lado a: ");
    scanf("%lf", &a);
    printf("Digite o valor do lado b: ");
    scanf("%lf", &b);
    printf("Digite o valor do lado c: ");
    scanf("%lf", &c);

    p = (a + b + c) / 2.0;
    area = sqrt(p * (p - a) * (p - b) * (p - c));

    printf("A area do triangulo e: %.2lf\n", area);

    return 0;
}