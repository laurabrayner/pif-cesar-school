Questão 06.

a) R = <stdio.h> procura nas pastas padrão do compilador, usado pras bibliotecas do C. "areas.h" procura primeiro na pasta do projeto, usado pros arquivos que a gente mesmo cria.

b) R = #undef SOMA apaga a definição da macro, depois dele SOMA não existe mais. #undef SOMA(x,y) tá errado porque o #undef só recebe o nome da macro, sem os parâmetros.

c) R = Imprime "Modo normal". Isso é decidido no pré-processamento, antes de compilar. O pré-processador já tira as diretivas e o trecho que não foi escolhido, então elas não vão pro executável.
