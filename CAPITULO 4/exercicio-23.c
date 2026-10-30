#include <stdio.h>

int main() {
    int dia, mes, ano;

    printf("Digite a data (formato: DD MM AAAA): ");
    scanf("%d %d %d", &dia, &mes, &ano);

    if (mes < 1 || mes > 12) {
        printf("Erro: Mês inválido! O mês deve estar no intervalo de 1 a 12.\n");
        return 1;
    }

    printf("%d de ", dia);

    switch (mes) {
        case 1:  printf("janeiro"); break;
        case 2:  printf("fevereiro"); break;
        case 3:  printf("março"); break;
        case 4:  printf("abril"); break;
        case 5:  printf("maio"); break;
        case 6:  printf("junho"); break;
        case 7:  printf("julho"); break;
        case 8:  printf("agosto"); break;
        case 9:  printf("setembro"); break;
        case 10: printf("outubro"); break;
        case 11: printf("novembro"); break;
        case 12: printf("dezembro"); break;
    }

    printf(" de %d\n", ano);

    return 0;
}