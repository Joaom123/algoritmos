# Exercícios Capítulo 4

## 4.7 - Manipulação de listas

A maioria dos exercícios desta seção tem duas versões: uma para lista com cabeça e
outra para lista sem cabeça. Além disso, é interessante resolver cada exercício de duas
maneiras: uma iterativa e uma recursiva.

4.7.1 Vetor para lista. Escreva uma função que copie um vetor para uma lista encadeada.

4.7.2 Lista para vetor. Escreva uma função que copie uma lista encadeada para um vetor.

4.7.3 Cópia. Escreva uma função que faça uma cópia de uma lista dada.

4.7.4 Comparação. Escreva uma função que decida se duas listas dadas têm o mesmo
conteúdo.

4.7.5 Concatenação. Escreva uma função que concatene duas listas encadeadas
(isto é, “amarre” a segunda no fim da primeira).

4.7.6 Contagem. Escreva uma função que conte o número de células de uma lista
encadeada.

4.7.7 Ponto médio. Escreva uma função que receba uma lista encadeada e devolva
o endereço de uma célula que esteja o mais próximo possível do ponto médio da lista.
Faça isso sem calcular explicitamente o número n de células da lista e o quociente n/2.ELSEVIER
Capítulo 4. Listas encadeadas • 29

4.7.8 Contagem e remoção. Escreva uma função que remova a k-ésima célula de
uma lista encadeada.

4.7.9 Contagem e inserção. Escreva uma função que insira uma nova célula com
conteúdo x entre a k-ésima e a (k+1)-ésima células de uma lista encadeada.

4.7.10 Liberação. Escreva uma função que aplique a função free a todas as célu-
las de uma lista encadeada. Estamos supondo, é claro, que cada célula da lista foi
originalmente alocado por malloc.

4.7.11 Inversão. Escreva uma função que inverta a ordem das células de uma lista
encadeada (a primeira passa a ser a última, a segunda passa a ser a penúltima etc.).
Faça isso sem criar novas células; apenas altere os ponteiros.

4.7.12 Projeto de programação. Digamos que um documento é um vetor de ca-
racteres contendo apenas letras, espaços e sinais de pontuação. Digamos que uma
palavra é um segmento maximal que consiste apenas de letras. Escreva uma função
que imprima uma relação de todas as palavras de um documento dado juntamente com
o número de ocorrências de cada palavra.

## 4.8 - Outros tipos de listas encadeadas

4.8.1 Descreva, em C, a estrutura de uma célula de uma lista duplamente encadeada.

4.8.2 Escreva uma função que remova de uma lista duplamente encadeada a célula cujo
endereço é p. Que dados sua função recebe? Que coisa devolve?30 • ALGORITMOS em linguagem C
ELSEVIER

4.8.3 Suponha uma lista duplamente encadeada. Escreva uma função que insira uma
nova célula com conteúdo y logo após a célula cujo endereço é p. Que dados sua função
recebe? Que coisa devolve?

4.8.4 Problema de Josephus. Imagine n pessoas 
dispostas em círculo. Suponha que
as pessoas estão numeradas de 1 a n no sentido horário. Começando com a pessoa de
número 1, percorra o círculo no sentido horário e elimine cada m-ésima pessoa enquanto
o círculo tiver duas ou mais pessoas. Qual
o número do sobrevivente? Escreva e teste uma função que resolva o problema.
