// Trecho A
int n = 5;
int x = ++n;
printf("Trecho A: n = %d, x = %d\n", n, x);

// Trecho B
int m = 5;
int y = m++;
printf("Trecho B: m = %d, y = %d\n", m, y);

a) ++n, primeiro adiciona e depois atribui. Já o m++, atribui e depois soma. Nesse caso, no trecho A o n e o x vão ser 6.
   Já no trecho B, o m = 6 e o y = 5

b) Alterar (n++) e ler (n, n+1) a mesma variável no mesmo printf gera um comportamento indefinido (undefined behavior), fazendo o resultado variar conforme o compilador. 