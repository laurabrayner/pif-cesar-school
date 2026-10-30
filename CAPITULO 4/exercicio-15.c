#include <stdio.h>

int main() {
    int idade, tempo_servico;

    printf("Digite a idade do trabalhador: ");
    scanf("%d", &idade);

    printf("Digite o tempo de serviço (em anos): ");
    scanf("%d", &tempo_servico);

    if (idade < 0 || tempo_servico < 0) {
        printf("Erro: Idade e tempo de serviço devem ser valores positivos.\n");
        return 1;
    }

    if ((idade >= 65) || (tempo_servico >= 30) || (idade >= 60 && tempo_servico >= 25)) {
        printf("\nO trabalhador PODE se aposentar.\n");
    } else {
        printf("\nO trabalhador NAO pode se aposentar.\n");
    }

    return 0;
}