#include <stdio.h>

int main() {
    int l;

    printf("Digite a dimensao do lado do quadrado L (entre 3 e 20): ");
    scanf("%d", &l);


    if (l < 3 || l > 20) {
        printf("Valor invalido! O tamanho deve ser entre 3 e 20.\n");
        return 1;
    }

    printf("\n");


    for (int i = 0; i < l; i++) {
        for (int j = 0; j < l; j++) {
        
            if (i == 0 || i == l - 1 || j == 0 || j == l - 1) {
                printf("X");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}