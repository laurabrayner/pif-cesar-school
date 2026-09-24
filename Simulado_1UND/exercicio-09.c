#include <stdio.h>
#include <math.h> 

int main(){
float a, b, c, p, area;

printf("Digite o primeiro lado do triangulo: ");
scanf("%f", &a);
printf("Digite o segundo lado do triangulo: ");
scanf("%f", &b);
printf("Digite o terceiro lado do triangulo: ");
scanf("%f", &c);

p =  (a + b + c) / 2.0;
area =  sqrt(p * (p -a) * (p - b) * (p - c));

printf("O perimetro a area do triangulo, sao, respectivamente %.2f %.2f", p , area);

return 0;

}