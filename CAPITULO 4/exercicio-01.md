Questão 01. Avaliação de Expressões Condicionais e Atribuição vs. Igualdade — Em relação à
sintaxe e semântica do comando if na Linguagem C, responda analiticamente:

a) Qual é o efeito prático de escrever if (x = 0) em vez de if (x == 0)? Explique o que acontece com a
variável x e qual bloco de código será executado.

R = if (x = 0) utiliza = como operador de atribuição. Já if (x == 0) utiliza == como operador de comparação. Na primeira alternativa, o bloco if nem é executado, porque 0 é falso.

b) Como a Linguagem C interpreta valores numéricos inteiros ou reais dentro da condição do comando
if? O que significa um resultado ser avaliado como 'falso' ou 'verdadeiro'?

R = Falso é representado pelo valor 0 e Verdadeiro é representado por um valor diferente de 0. Quando a expressão dentro do if resulta em zero, a condição é considerada falsa.

c) Analise a instrução if (x = -5) e determine se o bloco de código associado será executado ou
ignorado. Justifique sua resposta com base no padrão ANSI C.

R = O bloco de código associado ao if será executado.

