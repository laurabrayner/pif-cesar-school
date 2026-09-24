#include <stdio.h> 

int main(){
int total_segundos, segundos, horas, minutos;

printf("Digite a quantidade de segundos: ");
scanf("%d", &total_segundos);

horas = total_segundos/ 3600;
minutos = (total_segundos % 3600) / 60;
segundos = total_segundos % 60;

printf("Em %d segundos, existem, %d horas, %d minutos e %d segundos", total_segundos, horas, minutos, segundos);

return 0;


}

