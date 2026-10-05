#include <stdio.h>

int main(){
    int num, i;
    int encontrados = 0;

    printf("Digite o numero limite: ");
    scanf("%d", &num);

    for(i=1; i <= num; i++) {
        (i % 3 == 0 && i % 5 == 0) ? (printf("%d ", i), encontrados++) : 0;


    }

encontrados == 0 ? printf("Nenhum número no intervalo satisfaz a condição.\n") : printf("\n");

return 0;


}