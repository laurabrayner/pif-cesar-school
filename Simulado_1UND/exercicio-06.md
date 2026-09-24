Questão 06. 

#include <stdio.h>
#include <stdlib.h>
int main() {
 int i;
 for (i = 1; i <= 10; i++) {
    if (i == 5) continue;
    if (i == 8) break;
    int soma = 0;
     soma += i * i;
 }
 printf("Soma final = %d\n", soma);
 system("PAUSE");
 return 0;
}


a) A variável soma foi declarada dentro do for, mas tecnicamente, ela não existe fora do for. O print da soma final, chama a variável
soma, que não foi declarada externamente ao for, então não tem como ela ser chamada, ela "não existe".

b) Em i = 1, 2 , 3, 4 , 6 e 7, o comando vai rodar normalmente, e fará também a soma. Em i = 5, ele vai executar o bloco continue que vai pular diretamente pro i++ novamente. Em i = 8 executa o comando break, que para o for impedindo a execução de i = 9 e 10.

c) O CÓDIGO CORRETO:

#include <stdio.h>
#include <stdlib.h>
int main() {
 int soma = 0, i;
 for (i = 1; i <= 10; i++) {
    if (i == 5) continue;
    if (i == 8) break;
     soma += i * i;
 }
 printf("Soma final = %d\n", soma);
 system("PAUSE");
 return 0;
}

O print da soma final é:  115

