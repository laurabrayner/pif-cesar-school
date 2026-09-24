#include <stdio.h>

int main(){
float nota;

do{
    printf("Digite sua nota: ");
    scanf("%f", &nota);

    (nota < 0.0 || nota > 10.0) ? printf("nota invalida, tente novamente\n") : printf("nota valida");
} while (nota < 0.0 || nota > 10.0);
  return 0;

}