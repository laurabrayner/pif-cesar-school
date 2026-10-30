Questão 02. 

a) Qual mensagem será impressa no console ao executar o código acima? Justifique por que a Opção B
é ou não exibida.

R = A saída é Opção B. O if interno era falso, o que fez a condioção pular pro else. 

b) Qual é a regra oficial da Linguagem C para associar uma cláusula else a um comando if em códigos
sem chaves de bloco?

R = quando não são utilizadas chaves de bloco { }, a regra determina que uma cláusula else é sempre vinculada ao if anterior mais próximo que ainda não possua um else associado

c) Reescreva o código acima utilizando chaves { } para garantir explicitamente que a Opção B seja
impressa apenas quando x <= 10.

R = int x = 15, y = 5;
if (x > 10){
    if (y > 10){
        printf("Opção A\n");
    }
}else {
    printf("Opção B\n");
}