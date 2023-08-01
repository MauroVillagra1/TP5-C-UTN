#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <ctime>

void CargaMatriz(int Matriz[10][10][10], int &M, int &N, int &P);
void CargaVector (int Matriz[10][10][10], int M, int N, int P, int Vector[10]);
void MostrarVector (int Matriz[10][10][10], int M, int Vector[10]);

main()
{
	int M=0, N=0, P=0, Vector[10], Matriz[10][10][10];
	srand (time(NULL));
	CargaMatriz(Matriz, M, N, P);
	CargaVector(Matriz, M, N, P, Vector);
	MostrarVector(Matriz, M, Vector);
}





void CargaMatriz(int Matriz[10][10][10], int &M, int &N, int &P)
{
	int i, j, k;
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
				//printf("\nIngresar valor del elemento: ");
				//scanf("%d", &Matriz[i][j][k]);
	               Matriz[i][j][k]=1+rand()%9;   //Prueba
			}
		}
	}
	
}
void CargaVector (int Matriz[10][10][10], int M, int N, int P, int Vector[10])
{
	int i, j, k;
	Vector[i]=0;

	for(i=0;i<M;i++)
	{
		printf("\n\nMatriz [%d]", i+1);
		
		for(j=0;j<N;j++)
		{
			
			printf("\n\n");
			for(k=0;k<P;k++)
			{

               printf("\t%d",Matriz[i][j][k]);
               Vector[i]=Matriz[i][j][k]+Vector[i];
	
			}
		}
	}
}
void MostrarVector (int Matriz[10][10][10], int M, int Vector[10])
{
	int i;
printf ("\n\nVector:");
	for(i=0;i<M;i++)
	{
	printf("\t%d",Vector[i]);
	}
		
	
}
