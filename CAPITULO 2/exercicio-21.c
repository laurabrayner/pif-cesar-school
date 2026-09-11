#include <stdio.h>

int main() {
    char caractere;

    printf("Digite um caractere: ");
    scanf(" %c", &caractere);

    /* 
      EXPLICAÇÃO DO NÚMERO EXIBIDO:
      Em C, o tipo 'char' armazena internamente um número inteiro de 1 byte (8 bits).
      Esse número representa o código numérico decimal associado ao símbolo digitado 
      segundo a Tabela ASCII. O computador não guarda o desenho da letra na memória, mas sim este valor 
      numérico único que identifica a letra, dígito ou símbolo digitado.
      Ao usar o especificador '%d' no printf, o programa apenas exibe o valor 
      numérico em vez de desenhar o caractere (exibido com '%c').
     */

    printf("Caractere digitado: %c\n", caractere);
    printf("Codigo ASCII (inteiro): %d\n", caractere);

    return 0;
}