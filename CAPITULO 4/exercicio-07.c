#include <stdio.h>
#include <math.h>

int main() {
    double numero;

    printf("Digite um numero real: ");
    scanf("%lf", &numero);

    if (numero >= 0.0) {
        double raiz = sqrt(numero);
        printf("O numero e positivo ou zero.\n");
        printf("A raiz quadrada de %.2lf e: %.2lf\n", numero, raiz);
    } else {
        double quadrado = numero * numero;
        printf("O numero e negativo.\n");
        printf("O quadrado de %.2lf e: %.2lf\n", numero, quadrado);
    }

    return 0;
}