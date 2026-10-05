Questão 05. Operador Vírgula e Múltiplas Variáveis de Controle — O operador vírgula (,)
permite agrupar múltiplas expressões em um único comando, garantindo a avaliação da esquerda
para a direita. Observe o trecho abaixo:


int i, j;
for (i = 0, j = 10; i < j; i++, j--) {
    printf("i = %d, j = %d | soma = %d\n", i, j, i + j);
}


a) Exatamente quantas iterações o laço acima executará antes de ser encerrado?

R = 5 iterações

0 10 
    1 9
    2 8
    3 7 
    4 6
    

b) Escreva a saída exata produzida pelo comando printf em cada uma das iterações
executadas.

R = 1 saida: i = 0, j = 10 | soma = 10
    2 saida: i = 1, j = 9 | soma = 10
    3 saida: i = 2, j = 8 | soma = 10
    4 saida: i = 3, j = 7 | soma = 10
    5 saida: i = 4, j = 6 | soma = 10


c) Reescreva a lógica deste mesmo laço utilizando obrigatoriamente a estrutura while

R = 

#include <stdio.h>

int main(){
int i = 0, j = 10;

while (i<j){
    printf("i = %d, j = %d | soma = %d\n", i, j, i + j);
     i++; 
     j--; 

}

return 0;


}