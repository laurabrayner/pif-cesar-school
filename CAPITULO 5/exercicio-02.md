Questão 02.

a) R = Só um valor. A ideia era retornar a soma e a média juntas, mas o return soma, media; usa o operador vírgula, que descarta a soma e retorna só a média.

b) R = O return; encerra a função na hora. Se erro < 0, imprime "Erro invalido" e sai sem imprimir o "Codigo processado". Não é obrigatório no final, porque a função void termina sozinha quando chega no }.

c) 

int media(int a, int b, int c) {
    return (a + b + c) / 3;
}

int soma(int a, int b, int c) {
    return a + b + c;
}

R = Porque o return só devolve um valor por vez, então pra ter dois resultados diferentes cada um precisa da sua função.
