Questão 06. Laço Sem Corpo e Incremento Pós-fixado — Analise o trecho de código abaixo
que utiliza um laço de repetição com corpo vazio:


int x = 0;
while (x++ < 5);
printf("Valor final de x = %d\n", x);


a) Qual é o valor final da variável x que será impresso pela instrução printf?

R = 6 

b) Explique passo a passo a sequência de incrementos e comparações lógicas que ocorrem
durante a execução do teste 'x++ < 5'.

R = 1 Avaliação: Testa 0 < 5 (Verdadeiro). x é incrementado para 1.

    2 Avaliação: Testa 1 < 5 (Verdadeiro). x é incrementado para 2.

    3 Avaliação: Testa 2 < 5 (Verdadeiro). x é incrementado para 3.

    4 Avaliação: Testa 3 < 5 (Verdadeiro). x é incrementado para 4.

    5 Avaliação: Testa 4 < 5 (Verdadeiro). x é incrementado para 5.

    6 Avaliação: Testa 5 < 5 (Falso). Mesmo a condição falhando e encerrando o laço, o efeito colateral de pós-incremento é executado, levando x para 6.


c) Reescreva esse código de forma explícita e clara (sem corpo vazio), mantendo exatamente o
mesmo resultado final de x.

R = 

#include <stdio.h>

int main(){
int x = 0;

while (x < 5){
x++;

}

x++;

printf("Valor final de x = %d\n", x);

}