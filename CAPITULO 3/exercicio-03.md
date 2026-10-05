Questão 03. Flexibilidade do Laço for e Omissão de Expressões — A sintaxe do laço for em C
consiste em três expressões separadas por ponto-e-vírgulas: inicialização, teste e incremento.
Analise os três trechos de código abaixo:



// Trecho A: Incremento por divisão
for (a = 36; a > 0; a /= 2)
     printf("%d\t", a);

// Trecho B: Omissão de inicialização e incremento
for (; (ch = getch()) != 'X' ;)
     printf("%c", ch + 1);

// Trecho C: Omissão completa de expressões
for (;;)
    printf("Laço Infinito\n");



a) Qual é a sequência exata de valores impressos no console ao executar o Trecho A?

R = 36    18    9    4    2    1


b) Explique o comportamento do Trecho B. O que faz a operação 'ch + 1' e por que os
parênteses em '(ch = getch())' são estritamente necessários antes da comparação com 'X'?

R = Vai adicionar um caractere, ao caractere pressionado pela pessoa. Se a pessoa digitar B, o programa vai retornar C. Os () são necessários porque != tem maior ordem de precedencia que =.


c) Como o programa pode interromper a execução do laço infinito do Trecho C de forma
programática sem forçar o encerramento do processo pelo sistema operacional?

R = Utilizando o comando break.