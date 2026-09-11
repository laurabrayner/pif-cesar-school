#include <stdio.h>

int main(){
    float pi = 3.141593;
    float A, R, V;

    printf("Digite o valor do raio: ");
    scanf("%f", &R);

    A = 4 * pi * (R*R); 
    V = (4.0/3.0) * pi * (R*R*R);

    printf("A area da circunferencia eh, %.2f e o seu volume eh %.2f", A, V);

    return 0;

}