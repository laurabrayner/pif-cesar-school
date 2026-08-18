#include <stdio.h>

int main() {
    int segundos_totais, horas, minutos, resto, segundos;

    printf("Digite a quantidade de segundos: \n");
    scanf("%d", &segundos_totais);

    horas = segundos_totais/3600;
    resto = segundos_totais % 3600;
    minutos = resto / 60;
    segundos = resto % 60;

    printf("%d segundos, correspodem a %d horas, %d minutos e\n%d segundos.", segundos_totais, horas, minutos, segundos);
    return 0;
}