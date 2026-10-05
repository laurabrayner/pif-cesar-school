#include <stdio.h>

int main() {
    int numero, temp;
    int invertido = 0;

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &numero);

    if (numero <= 0) {
        printf("Por favor, insira um numero inteiro positivo (maior que zero).\n");
        return 1;
    }

    temp = numero;

    while (temp > 0) {
        int digito = temp % 10;               
        invertido = (invertido * 10) + digito; 
        temp = temp / 10;                     
    }

    printf("Numero original: %d\n", numero);
    printf("Numero invertido: %d\n", invertido);

    return 0;
}