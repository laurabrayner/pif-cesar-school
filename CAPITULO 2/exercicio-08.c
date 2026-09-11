#include <stdio.h>

int main(){
int numero;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    int quadrado = numero*numero;
    double decima = numero/10.0;

    printf("O quadrado do numero e: %d\n", quadrado);
    printf("A decima parte do numero e: %.2f", decima);

}