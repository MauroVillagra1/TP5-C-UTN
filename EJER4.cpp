#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <iostream>
void CARGARA(int A[50][50],int M, int N);
void CARGARB(int B[50][50],int M, int N);
void ANALIZAR (int A[50][50],int B[50][50],int M, int N);
void MOSTRAR(int A[50][50],int M, int N);
int i,j;

main()//DESARROLLO DEL EJERCICIO
{
	int A[50][50],B[50][50],M,N;
	printf("EJERCICIO 4");
	printf("\n\nIngrese la cantidad de filas:  ");
	scanf("%d",&M);
	printf("\n\n Ingrese la cantidad de columnas:  ");
	scanf("%d",&N);
	CARGARA(A,M,N);
	CARGARB(B,M,N);
	ANALIZAR(A,B,M,N);
	MOSTRAR(A,M,N);
	getch();
	
}

void CARGARA(int A[50][50],int M, int N)//CARGA TODOS LOS VALORES DE A EN 0
{
	for(i=0;i<M;i++)
	{
		for (j=0;j<N;j++)
		{
			A[i][j]=0;
		}
	}
}
void CARGARB(int B[50][50],int M, int N)//CARGA MANUAL DE LOS VALORES DE B
{
	for(i=0;i<M;i++)
	{
		for (j=0;j<N;j++)
		{
			printf("\n\n Ingrese el valor del elemento %d %d:  ",i,j);
			scanf("%d",&B[i][j]);
		}
	}
}
void ANALIZAR (int A[50][50],int B[50][50],int M, int N)//ANALIZA LAS CONDICIONES PARA ASIGNAR UN VALOR AL ELEMENTO DE LA MATRIZ A
{
	int mod1,mod2;
	
	for(i=0;i<M;i++)
	{
		for(j=0;j<N;j++)//CHEQUEA QUE EL NUMERO SEA IMPAR, NEGATIVO O MULTIPLO DE DIEZ PARA PONER UN 1 DE LO CONTRARIO UN 7
		{
			mod1= B[i][j] % 2;
			mod2= B[i][j] % 10;
			if(mod1==1 || B[i][j]<0 || mod2 == 0 )
			{
				A[i][j]=1;
			}
			else
			{
				A[i][j]=7;
			}
		}
	}
}
void MOSTRAR(int A[50][50],int M, int N)//MUESTRA LOS NUEVOS VALORES DE LA MATRIZ A
{
	system("CLS");
	printf("EJERCICIO 4");
	printf("\n\n La matriz A es:  \n\n");
	for(i=0;i<M;i++)
	{
		for (j=0;j<N;j++)
		{
			printf("  %d  ",A[i][j]);
		}
		printf("\n");
	}
}

