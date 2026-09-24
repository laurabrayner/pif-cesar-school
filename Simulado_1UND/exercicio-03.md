Questão 03. 

int a = 2, b = 4, c = 5, d = 10;

a += b + c; // Valor final de a = ?

a = a + b + c 
a = 2 + 4 + 5 
a = 11 

b *= c = d - 2; // Valores finais de b e c = ?

c = d - 2
c = 10 - 2
c = 8 

b = b * c
b = 4 * 8 
b = 32

d %= a + 3; // Valor final de d = ?

d = d % (a+3)
d = 10 % (11+3)
d = 10 % 14 
d = 10

a += b += c += 5; // Valores finais de a, b e c = ?

c = c + 5
c = 8 + 5
c = 13

b = b + c
b = 32 + 13
b = 45

a = a + b
a = 11 + 45 
a = 56

VALORES FINAIS:

a = 56
b = 45
c = 13 
d = 10