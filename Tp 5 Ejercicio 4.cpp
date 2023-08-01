#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <ctime>



main()
{
	int M=0, N=0 , i, j, Matriz[10][10], MatrizA[10][10], MatrizB[10][10];
	srand (time(NULL));
	printf("Ingrese Numero de fila: ");
	scanf("%d", &M);
	printf("\nIngrese Numero de Columna: ");
	scanf("%d", &N);
	
	for (i=0;i<M;i++)
	{
		for (j=0;j<N;j++)
		{
			Matriz[i][j]=1+rand()%99;
			MatrizA[i][j]=Matriz[i][j];
		}
	}
	
	for (i=0;i<N;i++)
	{
		for (j=0;j<M;j++)
		{
			MatrizB[j][i]=Matriz[i][j];
		}
	}
	printf("\nMatriz A");
	for (i=0;i<M;i++)
	{
		printf("\n\n");
		for (j=0;j<N;j++)
		{
		printf("\t%d",MatrizA[i][j]);
		}
	}
	printf("\nMatriz B");
	for (i=0;i<M;i++)
	{
		printf("\n\n");
		for (j=0;j<N;j++)
		{
		printf("\t%d",MatrizB[i][j]);
		}
	}
}
