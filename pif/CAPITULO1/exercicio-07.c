/*
   Questão 07 
   a) printf("\n\tBom dia! Shirley.");
      -> pula uma linha (fica em branco) e, na linha seguinte, um tab
         seguido do texto (sem quebra de linha no final):

      
      	Bom dia! Shirley.

   b) printf("Você já tomou café? \n");
      -> imprime o texto normalmente (com um espaço antes do fim) e
         pula uma linha ao final:

      Você já tomou café? 

   c) printf("\n\nA solução não existe!\nNão insista.");
      -> pula duas linhas (ficam em branco), depois imprime a primeira
         frase, quebra a linha e imprime a segunda frase (sem quebra
         de linha no final):


      A solução não existe!
      Não insista.

   d) printf("Duas\tlinhas\tde\tsaída\nou\tuma?");
      -> imprime "Duas", tab, "linhas", tab, "de", tab, "saída", quebra
         de linha, "ou", tab, "uma?" (sem quebra de linha no final):

      Duas	linhas	de	saída
      ou	uma?

   e) printf("%s\n%s\n%s\n", "um", "dois", "três");
      -> substitui cada %s por um argumento, com quebra de linha após
         cada um (inclusive depois do último, terminando em linha
         vazia):

      um
      dois
      três

*/

#include <stdio.h>

int main() {
    printf("%s\n%s\n%s\n", "um", "dois", "três");
    return 0;
}