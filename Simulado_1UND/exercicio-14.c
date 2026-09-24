#include <stdio.h>

int main() {
    const int senha_secreta = 2026;
    int tentativa_senha = 0;
    int tentativas = 0;


    while (tentativas < 3 && tentativa_senha != senha_secreta) {
        tentativas++;
        printf("Digite a senha (Tentativa %d de 3): ", tentativas);
        scanf("%d", &tentativa_senha);


        (tentativa_senha != senha_secreta && tentativas < 3) 
            ? printf("Senha incorreta. Tente novamente.\n\n") 
            : 0;
    }


    (tentativa_senha == senha_secreta) 
        ? printf("\nAcesso Concedido!\n") 
        : printf("\nConta Bloqueada por Seguranca!\n");

    return 0;
}