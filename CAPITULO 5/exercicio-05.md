Questão 05.

a) R = SQR(2+3) imprime 25, porque vira ((2+3)*(2+3)) = 5 * 5.
DOBRO(2+3) imprime 8, porque vira 2+3*2, e a multiplicação vem primeiro: 2 + 6 = 8.
A diferença é que SQR tem parênteses de proteção e DOBRO não, então a macro só cola o texto e a precedência muda o resultado.

b) R = Porque #define não é um comando do C, é uma diretiva do pré-processador que só substitui texto. Se tivesse ; ele ia junto na substituição e dava erro. As maiúsculas são pra diferenciar macros e constantes das variáveis.

c) R = Por causa do espaço entre PRN e (n), ele vira uma constante sem argumento. O certo é #define PRN(n) printf("%d", n).
Diferença: a macro é só substituição de texto antes de compilar e não verifica tipo, já a função é chamada na execução e verifica os tipos dos parâmetros.
