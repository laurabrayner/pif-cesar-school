int a = 1, b = 2, c = 3, d = 4;


01. a += b + c; // Valor final de a = ?
a = a + (b + c)
a = 1 + (2+3)
a = 6 

02. b *= c = d + 2; // Valores finais de b e c = ?
b *= (c = (d+2))
b *= (c = (4+2))
b *= (c = 6)
b = b*6
b = 2 * 6
b = 12

então agora as variáveis são: a = 6; b = 12; c = 6; d=4 

03. d %= a + a + a; // Valor final de d = ?
d = d % (a+a+a)
d = d % (6+6+6)
d = 4 % 18
d = 4

04. d -= c -= b -= a; // Valor final de d, c e b = ?
b = b - a // b  = 12 - 6 // b = 6
c = c - b // c = 6 - 6 // c = 0
d = d - c // d = 4 - 0 // d = 4

então agora as variáveis são: a = 6; b = 6; c = 0; d=4 

05. a += b += c += 7; // Valor final de a, b e c = ?
c = c + 7 // c = 0 + 7 // c = 7
b = b + c // b = 6 + 7 // b = 13
a = a + b // a = 6 + 13 // a = 19

então agora as variáveis são: a = 19; b = 13; c = 7; d=4 