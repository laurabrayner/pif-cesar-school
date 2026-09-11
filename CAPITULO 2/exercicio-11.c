#include <stdio.h>

int main(){
    float graus, radianos;
    float Pi = 3.141593;
    printf("Digite os graus: ");
    scanf("%f", &graus);

    radianos = graus * (Pi / 180.0);
    printf("%.2f e a mesma coisa que %.2f", graus, radianos);

    return 0;

}