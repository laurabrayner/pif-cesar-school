#include <stdio.h>

int main() {
    float altura_degrau_cm, altura_desejada_m;
    float altura_desejada_cm;
    int quantidade_degraus;

    printf("Digite a altura de cada degrau (em cm): ");
    scanf("%f", &altura_degrau_cm);

    printf("Digite a altura total a ser alcancada (em metros): ");
    scanf("%f", &altura_desejada_m);

    altura_desejada_cm = altura_desejada_m * 100.0;

    quantidade_degraus = (altura_desejada_cm / altura_degrau_cm);

    printf("Numero minimo de degraus necessarios: %d\n", quantidade_degraus);

    return 0;
}