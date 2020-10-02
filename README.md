# N-Queen-Question


Problema das n Rainhas
No problema das n rainhas recebemos um inteiro n e devemos determinar todas
as maneiras de dispor n rainhas num tabuleiro de xadrez de dimensão n × n, de
maneira que duas a duas as rainhas não se atacam, ou seja, não podem existir
duas rainhas na mesma coluna, mesma linha ou mesma diagonal do tabuleiro.
Tarefa

Você deve criar um programa que lê um inteiro n da entrada padrão e devolve o
número de soluções para este n, i.e., o número de configurações válidas diferentes
com n rainhas em um tabuleiro n × n.

Exemplos
Para n = 4, o número de soluções é 2.
Solução 1:

1

#  R  #  #
#  #  #  R
R  #  #  #
#  #  R  #
-----------------------------------------
Solução 2:
#  #  R  #
R  #  #  #
#  #  #  R
#  R  #  #
------------------------------------------

Para fins de teste, seguem os números de soluções para alguns valores de n.
Tabela 1: Número de soluções

n n
o de soluções
1 1
2 0
3 0
4 2
5 10
6 4
7 40
8 92
9 352
10 724
