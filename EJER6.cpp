#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
void CARGA(int A[50][50][50],int M,int N, int P);
int MENOR (int A[50][50][50],int M,int N, int P);
int VERIFICAR(int men);

int i,j,k;
main()
{   int A[50][50][50],M,N,P, men,ver;
	printf("EJERCICIO 6");
	printf("\n\n Indique la cantidad de filas del arreglo: ");
	scanf("%d",&M);
	printf("\n\n Indique la cantidad de columnas del arreglo: ");
	scanf("%d",&N);
	printf("\n\n Indique la profundidad del arreglo: ");
	scanf("%d",&P);
	CARGA(A,M,N,P);
	men = MENOR(A,M,N,P);
	system("CLS");
	printf("EJERCICIO 6");
	printf("\n\nEl menor numero encontrado en el arreglo es : %d",men);
	getch();
	ver = VERIFICAR (men);
	if (ver == 0)
	{
		system("CLS");
		printf("EJERCICIO 6");
		printf ("\n\nEl menor elemento es par");
	}
	else
	{
		system("CLS");
		printf("EJERCICIO 6");
		printf ("\n\n El menor elemento es impar");
	}
	getch();
	

	
	
}

void CARGA(int A[50][50][50],int M,int N, int P)
{
	for (k=0; k<P;k++)
	{
		for (i=0;i<M;i++)
		{
			for (j=0;j<M;j++)
			{
				printf("\n\n Ingrese el elemento %d %d de la parte %d del arreglo :  ",i,j,k);
				scanf("%d",&A[i][j][k]);
			}
		}
	}
}

int MENOR (int A[50][50][50],int M,int N, int P)
{
	int men;
	men = 999999999;
	for (k=0; k<P;k++)
	{
		for (i=0;i<M;i++)
		{
			for (j=0;j<M;j++)
			{
				if (A[i][j][k]<men)
				{
					men = A[i][j][k];
				}
				else
				{
				}
			}
		}
	}
	return men;
}

int VERIFICAR(int men)
{
	int par;
	par = men % 2;
	return par;
}
