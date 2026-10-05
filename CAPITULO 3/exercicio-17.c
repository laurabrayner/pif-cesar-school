#include <stdio.h>

int main() {
    float nota;
    float soma = 0.0;
    float maior = 0.0;
    float menor = 0.0;
    int total_alunos = 0;

    while (1) {
        printf("Digite a nota do aluno (0.0 a 10.0) ou -1.0 para encerrar: ");
        scanf("%f", &nota);

        if (nota == -1.0f) {
            break;
        }

        if (nota < 0.0f || nota > 10.0f) {
            printf("Nota invalida! Insira um valor entre 0.0 e 10.0.\n");
            continue;
        }

        if (total_alunos == 0) {
            maior = nota;
            menor = nota;
        } else {
            if (nota > maior) {
                maior = nota;
            }
            if (nota < menor) {
                menor = nota;
            }
        }

        soma += nota;
        total_alunos++;
    }

    if (total_alunos > 0) {
        printf("a) Total de alunos avaliados: %d\n", total_alunos);
        printf("b) A maior nota da turma: %.2f\n", maior);
        printf("c) A menor nota da turma: %.2f\n", menor);
        printf("d) A media geral da turma: %.2f\n", soma / total_alunos);
    } else {
        printf("\nNenhum aluno foi inserido.\n");
    }

    return 0;
}