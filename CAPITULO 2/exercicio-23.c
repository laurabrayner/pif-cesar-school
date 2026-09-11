#include <stdio.h>

int main() {
    int hora_inicio, minuto_inicio, segundo_inicio;
    int duracao_segundos;
    int total_segundos, hora_fim, minuto_fim, segundo_fim;

    printf("Digite a hora de inicio (0-23): ");
    scanf("%d", &hora_inicio);
    printf("Digite os minutos de inicio (0-59): ");
    scanf("%d", &minuto_inicio);
    printf("Digite os segundos de inicio (0-59): ");
    scanf("%d", &segundo_inicio);

    printf("Digite a duracao do experimento (em segundos): ");
    scanf("%d", &duracao_segundos);

    total_segundos = (hora_inicio * 3600) + (minuto_inicio * 60) + segundo_inicio + duracao_segundos;

    // Garante que o horario permaneca dentro do ciclo de 24 horas (86400 segundos)
    total_segundos = total_segundos % 86400;

    hora_fim = total_segundos / 3600;
    minuto_fim = (total_segundos % 3600) / 60;
    segundo_fim = total_segundos % 60;

    printf("Horario de termino: %02d:%02d:%02d\n", hora_fim, minuto_fim, segundo_fim);

    return 0;
}