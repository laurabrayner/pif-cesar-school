a) Explique detalhadamente o funcionamento da segunda linha de código e qual valor será armazenado
na variável situacao se media = 6.8.

R = Lendo o operador ternário, o que acontece é que se a media for maior ou igual a 7, ele vai guardar A, se não, guarda R. Nesse caso, se a media for 6.8, ele guarda R. 

b) Reescreva o trecho de código acima utilizando obrigatoriamente a estrutura tradicional if-else.

R = 
media = (nota1 + nota2) / 2.0;
if (media >= 7.0){
    situacao = 'A';
}else{
    situacao = 'R';
}

c) O operador ternário pode substituir qualquer estrutura if-else na Linguagem C? Explique as limitações
do operador ternário em relação a blocos com múltiplos comandos.

R = Não. Ele não tem comandos de controle (break, continue), além disso, ele é limitado a duas condiçoes, não tem exceções. 