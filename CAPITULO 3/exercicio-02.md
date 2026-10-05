Questão 02. Escopo e Tempo de Vida de Variáveis de Bloco — Um estudante escreveu o
programa abaixo com o intuito de calcular a soma dos quadrados dos números inteiros de 1 a 9,
mas encontrou falhas durante a compilação e execução:


#include <stdio.h>
#include <stdlib.h>
int main() {
    int i;
    for (i = 1; i < 10; i++) {
        int soma = 0;
        soma += i * i;
    }
    printf("Soma final = %d\n", soma);
    system("PAUSE");
    return 0;
}


a) Por que o compilador emitirá um erro de sintaxe/declaração na instrução printf final?

R = A variável soma foi declarada dentro do for, mas tecnicamente, ela não existe fora do for. O print da soma final, chama a variável
soma, que não foi declarada externamente ao for, então não tem como ela ser chamada, ela "não existe".


b) Mesmo que a instrução printf fosse movida para dentro do bloco do laço for, por que o
valor impresso para soma estaria conceitualmente incorreto a cada iteração?

R= Daria errado porque a cada reinicio de loop, soma é atribuida a 0. ao final de cada repetição do ciclo, a variável guarda apenas o quadrado do número atual em vez de acumular a soma com os valores anteriores

c) Apresente o código corrigido e explique o conceito de visibilidade, escopo de bloco e tempo
de vida de variáveis na linguagem C.

R = 

#include <stdio.h>
#include <stdlib.h>

int main() {
    int i;
    int soma = 0; // Declarada fora do laço para manter o valor acumulado

    for (i = 1; i < 10; i++) {
        soma += i * i;
    }

    printf("Soma final = %d\n", soma);
    system("PAUSE");
    return 0;
}

Escopo de Bloco: Limita a região do código onde o nome de uma variável é válido. Variáveis declaradas dentro de um bloco { } pertencem exclusivamente a esse bloco e não podem ser referenciadas fora dele.

Visibilidade: É a região do programa onde um identificador (como o nome de uma variável) pode ser acessado. No código original, a visibilidade de soma estava restrita ao interior do for.

Tempo de Vida (Lifetime): O período durante a execução do programa em que a variável ocupa espaço na memória RAM e retém o seu valor. Variáveis locais/automáticas são alocadas na memória ao entrar no seu bloco correspondente e destruídas assim que o bloco é encerrado.