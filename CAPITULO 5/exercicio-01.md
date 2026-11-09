Questão 01.

a) R = Protótipo: float celsius(float); que fica antes da main. Ele avisa pro compilador que a função existe, o tipo que ela retorna e o tipo do parâmetro.
Chamada: c = celsius(f); dentro da main. É onde a função é executada, o valor de f é passado pra ela e o resultado vai pra c.
Definição: float celsius(float fahr) { ... } depois da main. É o corpo da função, onde a conta é feita de fato.

b) R = O protótipo serve pro compilador já saber o tipo de retorno e os tipos dos parâmetros antes da chamada, assim ele consegue verificar se os argumentos estão certos. Sem ele, na hora da chamada o compilador não teria como verificar os parâmetros e ia assumir que a função retorna int (declaração implícita), e depois dá erro/aviso de tipos conflitantes quando ele encontra a definição como float.

c) R = É do tipo float. O tipo da função é o tipo do valor que ela devolve, porque é esse valor que a chamada vira no código (c = celsius(f)). Os parâmetros são só as entradas, podem ser vários e de tipos diferentes.
