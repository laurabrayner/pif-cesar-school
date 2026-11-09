Questão 04.

a) R = Caso base: n == 0, retorna 1. Passo recursivo: n * fatorial(n - 1). Sem o caso base a função ia se chamar pra sempre (n ia ficando negativo) até estourar a pilha e o programa quebrar.

b) 
Empilhando:
fatorial(4) = 4 * fatorial(3)
fatorial(3) = 3 * fatorial(2)
fatorial(2) = 2 * fatorial(1)
fatorial(1) = 1 * fatorial(0)
fatorial(0) = 1 (caso base)

Desempilhando:
fatorial(1) = 1 * 1 = 1
fatorial(2) = 2 * 1 = 2
fatorial(3) = 3 * 2 = 6
fatorial(4) = 4 * 6 = 24

c) R = Cada chamada cria um novo espaço na pilha com o seu valor de n e o ponto de retorno, e fica esperando a chamada seguinte terminar. Quando chega no caso base, elas vão saindo da pilha uma por uma. Sem caso base as chamadas nunca acabam, a pilha enche (stack overflow) e o programa quebra.
