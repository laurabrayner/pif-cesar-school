#include <stdio.h>

int main(){
    float Celsius, Fare, Kelvin; 
    printf("Digite a temperatura em Celsius: ");
    scanf("%f", &Celsius);

    Fare = (Celsius*9/5) + 32;
    Kelvin = Celsius + 273.15;

    printf("A temperatura em Fahrenheit e Kelvin e, respectivamente: %.2f e %.2f", Fare, Kelvin);

    return 0;
}