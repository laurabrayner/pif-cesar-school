a) o valor é 2.
b) O que acontece é que no printf, ao chamar a variavel ele usa o %d, que é apenas pra numeros inteiros, então
ele só envia a parte inteira. O fenomeno é truncamento.
c) ele pode ser evitado, usando o tipo de dado correto, %f. Para arredondar, teria que usar outra biblioteca.