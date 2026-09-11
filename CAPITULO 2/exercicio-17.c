#include <stdio.h>

int main(){
    float pi = 3.141593;
    float A, R, C;

    printf("Digite o valor do raio: ");
    scanf("%f", &R);

    A = pi * (R*R);
    C = 2 * pi * R;

    printf("A area da circunferencia eh %.2f e o valor de sua circunferencia eh %.2f", A, C);

    return 0;


}