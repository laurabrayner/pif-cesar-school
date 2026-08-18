## Questão 06 

### Código Original

main()
{
    int a=1; b=2; c=3:
    printf("0s números são: %d%d%d\n, a, b, c, d);
    system("pause");
}

### Erros Identificados

1. **`main()`:** antes disso, é preciso incluir as bibliotecas `stdio.h` e `stdlib.h`; além disso, falta o `int` antes do `main()`.
2. **`int a=1; b=2; c=3:`:** nesse formato, o tipo `int` só vai se aplicar à variável `a` — teriam que ser declaradas uma por uma. Além disso, a última variável está com `:` e não `;`.
3. **`printf("0s números são: %d%d%d\n, a, b, c, d);`:** `0` no lugar de `O`; essa sequência `%d%d%d\n` não vai chamar as variáveis e elas deveriam estar fora das aspas — a aspa não é fechada. Também não existe a variável `d`.
4. **`system("pause");`:** `"pause"` tem que ser maiúsculo.