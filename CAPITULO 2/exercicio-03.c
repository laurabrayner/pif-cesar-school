#include <stdio.h>

int main(){
    int numero;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    printf("Decimal: %d, Hexadecimal: %x, Octal: %o, ASCII: %c", numero, numero, numero, numero);

}