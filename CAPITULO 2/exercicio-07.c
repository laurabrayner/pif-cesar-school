#include <stdio.h>

int main(){

    int dia, mes, ano;
    printf("Digite a data no formato: dd/mm/aaaa ");
    scanf("%d/%d/%d", &dia, &mes, &ano);
    printf("A data e: %d/%d/%d", ano, mes, dia);

}