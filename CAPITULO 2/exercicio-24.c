#include <stdio.h>

int main(){

    float quilometros, metros;

    printf("Quantos quilometros por hora? ");
    scanf("%f", &quilometros);

    metros = quilometros/ 3.6;

    printf("Essa quilometragem equivale a %.2f metros por segundo", metros);

    return 0;

}