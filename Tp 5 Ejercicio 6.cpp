#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int MenorValor (int Matriz[10][10][10], int M, int N, int P);
int ValorParoImpar(int Aux);

main()
{
	int Matriz[10][10][10], M=0, N=0, P=0, Aux=0, i, j, k, Valor=0;
	printf("Ingresar Valor del Plano: ");
	scanf("%d", &M);
	printf("\nIngrese Numero de fila: ");
	scanf("%d", &N);
	printf("\nIngrese Numero de Columna: ");
	scanf("%d", &P);
	
	
	for(i=0;i<M;i++)
	{
		for(j=0;j<N;j++)
		{
			for(k=0;k<P;k++)
			{
				printf("\nIngresar valor del elemento: ");
				scanf("%d", &Matriz[i][j][k]);
	
			}
		}
	}
	for(i=0;i<M;i++)
	{
		printf("\n\n");
		for(j=0;j<N;j++)
		{
			
			printf("\n\n");
			for(k=0;k<P;k++)
			{

               printf("\t%d",Matriz[i][j][k]);
	
			}
		}
	}
	printf("\n\n");
	Aux=MenorValor(Matriz, M, N, P);
	printf("\nEl Menor elemento es: %d", Aux);
	Valor=ValorParoImpar(Aux);

}
int MenorValor (int Matriz[10][10][10], int M, int N, int P)
{
	int i=0, j=0, k=0, Aux=0;
	Aux=Matriz[i][j][k];
	for(i=0;i<M;i++)
	{
		for(j=0;j<N;j++)
		{
			for(k=0;k<P;k++)
			{
			if (Aux>Matriz[i][j][k])
			{
				Aux=Matriz[i][j][k];
			}
			}
		}
	}
	return Aux;
}

int ValorParoImpar(int Aux)
{
	int i, j, k, A;
	if (Aux%2==0)
	{
		printf("\nEl Menor elemento es Par");
		A=0;
	}
	else
	{
		printf("\nEl Menor elemento es Impar");
		A=1;
	}
	return A;
}
