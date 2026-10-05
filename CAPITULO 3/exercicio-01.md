Questão 01. Diferenças Fundamentais e Tempo de Avaliação de Laços — A linguagem C
disponibiliza três estruturas de controle para execução iterativa de código: for, while e do-while.
Analise o funcionamento dessas estruturas e responda:




a) Qual é a diferença essencial entre as estruturas while e do-while em relação ao número
mínimo de execuções do bloco de código e ao momento em que a condição de teste é
avaliada?

R =  A diferença é que no do-while o bloco é executado pelo menos 1 vez, antes de começar a rodar o while.


b) Em que situações de programação cada uma das três estruturas (for, while e do-while) se
apresenta como a escolha mais elegante, legível e adequada?

R = For: Normalmente utilizada quando ja tem o numero de repetições fixos.
    While: Normalmente utilizado quando não sabemos quantas vezes vamos repetir
    Do-While: Normalmente utilizado quando não sabemos quantas vezes vamos repetir, mas o bloco de código tem de ser executado obrigatoriamente pelo menos uma vez


c) Análise de código: O trecho 'while (condicao);' (com ponto-e-vírgula ao final) é um erro de
compilação ou um erro de lógica? Explique detalhadamente o que ocorre durante a execução
se condicao for verdadeira.

R = é um erro de lógica, porque a chaves não é aberta para que o código diga o que deve acontecer se a condição for verdadeira. O programa entrará em um loop infinito, travando a execução naquele ponto sem executar nenhum bloco e sem atualizar a condição.