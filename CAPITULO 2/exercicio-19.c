#include <stdio.h>

int main(){
    float salario, dias, imposto;
    float taxafixa = 30.00; 

    printf("Quantos dias o funcionario trabalhou? ");
    scanf("%f", &dias);


    imposto = (8.0/100.0)*(taxafixa*dias);
    salario = (taxafixa*dias) - imposto;
    

    printf("O salario a ser pago eh %.2f", salario);
    return 0;

}