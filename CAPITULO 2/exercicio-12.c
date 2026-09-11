#include <stdio.h> 

int main (){
    int num, antecessor, sucessor;

    printf("Digite um numero: ");
    scanf("%d", &num);

    sucessor = num; ++sucessor; /* feito desse jeito, porque se fizesse apenas ++sucessor, a variavel numero mudaria e a conta do antecessor daria errado*/
    antecessor = num; --antecessor; 
    

    printf("O sucessor e o antecessor desse numero eh, %d e %d, respectivamente ", sucessor, antecessor);

    return 0;

}