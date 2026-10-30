Questão 05. Considere as variáveis inteiras a = 0,
b = 5, c = 10 e analise o código:

a) Qual será a saída exata impressa pelo comando printf? Observe se o incremento ++b foi executado
ou ignorado.

R = Ele não foi executado, porque a primeira validação já é falsa. O que o print dá é 8 
(10 - 2 = 8)

b) Explique o conceito de avaliação de curto-circuito para o operador lógico E (&&) e para o operador
lógico OU (||).

R = Operador E (&&): Se a primeira condição for falsa (0), a expressão inteira será obrigatoriamente falsa. O segundo operando é ignorado.  
    Operador OU (||): Se a primeira condição for verdadeira (!= 0), a expressão inteira será obrigatoriamente verdadeira. O segundo operando é ignorado.

c) Qual seria o valor final de b e c se a condição fosse alterada para if (a == 0 || ++b > 5)?

R = b seria 5 e c seria 20 