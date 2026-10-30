#include <stdio.h>

int main() {
    float nota_lab, nota_semestral, exame_final;
    float media_ponderada;

    printf("Digite a nota do Trabalho de Laboratorio (peso 2): ");
    scanf("%f", &nota_lab);

    printf("Digite a nota da Avaliacao Semestral (peso 3): ");
    scanf("%f", &nota_semestral);

    printf("Digite a nota do Exame Final (peso 5): ");
    scanf("%f", &exame_final);

    media_ponderada = (nota_lab * 2.0f + nota_semestral * 3.0f + exame_final * 5.0f) / 10.0f;
    printf("\nMedia Ponderada: %.2f\n", media_ponderada);

    if (media_ponderada >= 0.0f && media_ponderada <= 2.9f) {
        printf("Situacao: Reprovado\n");
    } else if (media_ponderada >= 3.0f && media_ponderada <= 4.9f) {
        printf("Situacao: Em Recuperacao\n");
    } else if (media_ponderada >= 5.0f && media_ponderada <= 10.0f) {
        printf("Situacao: Aprovado\n");
    } else {
        printf("Media fora do intervalo valido (0.0 a 10.0). Verifique as notas digitadas.\n");
    }

    return 0;
}