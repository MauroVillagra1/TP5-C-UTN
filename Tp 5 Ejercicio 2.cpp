#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

void CargaMatriz (int Matriz[10][10], int &M, int &N);
void ListarMatriz (int Matriz[10][10], int M, int N);
main()
{
	int Matriz[10][10], i=0, j=0, M=0, N=0;
	CargaMatriz(Matriz, M, N);
	ListarMatriz(Matriz, M, N);
	printf("\n\nIngrese valor de la posicion que desee cambiar: ");
	printf("\n\nIngrese Numero de fila: ");
	scanf("%d", &i);
	printf("\nIngrese Numero de Columna: ");
	scanf("%d", &j);
	i=i-1;
	j=j-1;
	Matriz[i][j]=0;
	printf("\n\n");
	ListarMatriz(Matriz, M, N);
	printf("\n\n");
	system("pause");
	printf("\n\n");
	printf("Ingrese Numero de Fila que desee visualizar: ");
	scanf("%d", &i);
	i=i-1;
	printf("\nElemenots de la Fila [%d]: ", i+1);
	for (j=0;j<N;j++)
	{
	printf("\t%d",Matriz[i][j]);
	}
	printf("\n\nIngrese Numero de Columna que desee visualizar: ");
	scanf("%d", &j);
	j=j-1;
	i=0;
	printf("\nElemenots de la Columna [%d]: ", j+1);
	for (i=0;i<M;i++)
	{
	printf("\t%d",Matriz[i][j]);
	}
	
}


void CargaMatriz (int Matriz[10][10], int &M, int &N)
{
	int i, j;
	printf("Ingresar Valor de Filas: ");
	scanf("%d", &M);
	printf("\nIngresar Valor de Columnas: ");
	scanf("%d", &N);
	system("cls");
	for (i=0;i<M;i++)
	{
		for (j=0;j<N;j++)
		{
			
			printf("Ingrese Valor del elemento [%d][%d] de la Matriz: ", i+1, j+1);
			scanf("%d", &Matriz[i][j]);
			system("cls");
			if(Matriz[i][j]<=0)
			{
			do
			{
			printf("Error, ingresar valor mayor a 0");
			printf("\nIngrese Valor del elemento [%d][%d] de la Matriz: ", i+1, j+1);
			scanf("%d", &Matriz[i][j]);
			system("cls");
			}
			while(Matriz[i][j]<0);
			}
			
		}
	}
}
void ListarMatriz (int Matriz[10][10], int M, int N)
{
	int i, j;
	printf("Matriz: ");
	for (i=0;i<M;i++)
	{
		printf("\n\n");
		for (j=0;j<N;j++)
		{
			printf("\t%d",Matriz[i][j]);
		}
	}
}

