# Trabalho-Algoritimos
Nestor Amaral Dias Trabalho

O meu código para a resolução do desafio tem 6 partes e tem como objetivo resolver o desafio proposto, vou dividir a breve explicação igual os módulos do código.

O primeiro módulo é o módulo "tamanho" ele abre um arquivo .txt no computador onde está formatado da seguinte forma "CCAAGGCAATACAACATTAGAAGGGCGTCATCACTG", ele conta quantos carácteres ali existem e então usa uma função da biblioteca math.h, a função sqrt, que retorna um valor em uma variável double, vale resaltar que para que o programa funcione é necessário que o número de elementos seja uma raiz exata de um número, ou seja, tenha valores como 1,4,9 e por aí vai... O indicado é usar 36 elementos para fazer uma matriz 6x6.
O segundo módulo,"armazena", eu usei a função fgetc, que pega caráctere por caráctere de um arquivo, e implementei em uma matriz com tamanho definido pela função anterior. 

O terceiro módulo,"convertex", simplismente eu fiz todas as possibilidades de letras no DNA e converti para números em outra matriz inteira, pois assim seria mais fácil de trabalhar com comparações de números e também menos possibilidade de dar algo errado.

O quarto módulo, "resolve", o mais complicado de todos, ele testa todas as possibilidades em todas as direções se o DNA é de um simeo ou não, porém como o problema definia que o tamanho da matriz ficaria aberto eu precisei fazer algo diferente do que só pensar, eu usei uma lógica que funciona assim, primeiro eu faço uma varredura na matriz, de cima para baixo, da direita para esquerda, depois eu comparo se a posição da matriz atual, é igual a posição da matriz +1 no valor de linha, +2 no valor de linha e +3 no valor de linha, assim podendo resolver a matriz independente de seu tamanho, faço a mesma coisa para as outras tres possibilidades só que eu altero o teste, no caso de leitura de colunas eu testo +1, +2, +3 para o valor de coluna, no caso de leitura de diagonal para a direita eu eu testo +1 no valor de linha e +1 no valor de coluna, +2 no valor de linha e +2 no valor de coluna, +3 no valor de linha e +3 no valor de coluna e por último na diagonal para a esquerda eu testo +1 no valor de coluna e -1 no valor de linha, +2 no valor de coluna e -2 no valor de coluna e +3 no valor de coluna e -3 no valor de linha.

O quinto módulo,"saida", basicamente retorna se você é ou não um macaco com um simples if.

O sexto módulo,"main", basicamente gerencia o tamanho das matrizes principais do programa, incialize minhas funções e só.

----------------------------------------------IMPORTANTE----------------------------------------------------------------

Existem comentários onde você professor pode substituir o endereço do arquivo.txt que eu usei para rodar o programa.
