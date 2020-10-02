//Nome: Hiago Rafael de Souza
//Curso: Engenharia de computa��o
//RA: 729218
//Trabalho 4

#include <stdio.h>
#include<stdbool.h>

int tabuleiro[100][100]; //tamanho do tabuleiro
int solucoes=0; //numero de solucoes



bool livre(int N, int lin, int col) // verifica se a posi��o est� segura para a rainha
{
	int i, j;
	for(i=0; i<N; i++)  // verifica a linha
	{
		if(tabuleiro[lin][i]==1)
			return false;
	}

	for(i=0; i<N; i++) //verifica a coluna
	{
		if(tabuleiro[i][col]==1)
			return false;
	}


	for(i=lin, j=col; i>=0 && j>=0; i--, j--)  //verifica as diagonais
	{
		if(tabuleiro[i][j]==1)
			return false;
	}
	for(i=lin, j=col; i<N && j<N; i++, j++)
	{
		if(tabuleiro[i][j]==1)
			return false;
	}

	for(i=lin, j=col; i>=0 && j<N; i--, j++)
	{
		if(tabuleiro[i][j] == 1)
			return false;
	}
	for(i=lin, j=col; i<N && j>=0; i++, j--)
	{
		if(tabuleiro[i][j]==1)
			return false;
	}

	return true; //caso todas as posi��es estejam seguras, a rainha � alocada
}

void executar(int N, int col)
{
	if(col==N)
	{
		solucoes++; //soma +1 nas solu��es se estiver livre
		return;
	}

	for(int i=0; i<N; i++)
	{
		if(livre(N,i,col)) //chama a fun��o para verificar
		{
			tabuleiro[i][col] = 1; // aloca a rainha (1 para true)
			executar(N,col+1); //utiliza recursividade para chamar novamente
			tabuleiro[i][col]=0;
		}
	}
}

int main()
{

	int N; //numero n
	scanf("%d",&N); //recebe o numero desejado
	executar(N, 0); //chama a fun��o
	printf("%d",solucoes); //imprime o resultado

	return 0;
}
