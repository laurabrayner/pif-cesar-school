a) Escreva a saída exata gerada no terminal ao executar este programa. Explique por que ocorreu mais
de uma impressão.

R = Prata e Ouro. Ele começa do case 2, porque a variavel codigo é 2. Como não tem break, ele continua lendo e vai pro case 3, le o ouro e para no break.

b) Qual é o papel da instrução break dentro de um bloco switch-case e qual é o nome do fenômeno que
ocorre quando ela é omitida?

R = Interromper imediatamente a execução do bloco. Ocorre o efeito Fall-through. 

c) Quais tipos de dados de variáveis ou expressões podem ser utilizados como argumento no comando
switch (expressão)? É permitido usar float ou double? Justifique.

R = so tipos integrais, o uso de float e double nao é permitido. O tipo float e douible não permite comparação de igualdade direta, que é o que o switch faz.

