#include <stdio.h>

int main(){
    int numero, soma = 0;

    for (numero = 1; numero <= 100; numero++){

        printf("O quadrado de %d = %d\n", numero, (numero*numero));
        soma += (numero*numero);
    }
    printf("A soma de todos esses quadrados eh: %d", soma);

    return 0;
}