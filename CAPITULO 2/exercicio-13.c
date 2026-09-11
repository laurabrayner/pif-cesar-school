#include <stdio.h>

int main(){
    float lado, base, altura, quadrado, triangulo, retangulo;
    
    printf("Digite o valor do lado:\n ");
    scanf("%f", &lado);
    printf("Digite o valor da altura:\n ");
    scanf("%f", &altura);
    printf("Digite o valor da base:\n ");
    scanf("%f", &base);

    quadrado = lado*lado;
    retangulo = base*altura;
    triangulo = (base*altura)/2.0; 

    printf("A area do quadrado eh, %.2f, a area do retangulo eh, %.2f, e a area do triangulo eh, %.2f", quadrado, retangulo, triangulo);

    return 0; 
}