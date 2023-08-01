#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
void CARGA (int A[50][50],int M,int N);
float PROMEDIO(int A[50][50],int M,int N);
void LISTAR(int A[50][50],int M, int N, float prom);

int i,j;
main()
{
	int A[50][50],M,N;
	float prom;
	printf("EJERCICIO 5");
	printf("\n\n Indique la cantidad de vendedores:  ");
	scanf("%d",&M);
	printf("\n\n Indique la cantidad de articulos:  ");
	scanf("%d",&N);
	CARGA(A,M,N);
	prom = PROMEDIO(A,M,N);
	system("CLS");
	printf("EJERCICIO 5");
	printf("\n\n El importe promedio entre todos los articulos es de :  %f",prom);
	getch();
	LISTAR (A,M,N,prom);
	
}

void CARGA (int A[50][50],int M,int N)
{
	for(i=1;i<=M;i++)
	{
		for(j=1;j<=N;j++)
		{
			printf("\n\n Ingrese el importe de ventas realizado por el vendedor %d con respecto al articulo %d :  ",i,j);
			scanf("%d",&A[i][j]);
		}
	}
}

float PROMEDIO(int A[50][50],int M,int N)
{
	float sum,prom;
	sum = 0;
	for(i=1;i<=M;i++)
	{
		for (j=1;j<=M;j++)
		{
			sum = sum + A[i][j];
		}
	}
	prom = sum / N;
	return prom;
	

}

void LISTAR(int A[50][50],int M, int N, float prom)
{
    system("CLS");
	printf("EJERCICIO 5");
	printf("\n\nLISTADO DE ARTICULOS DEBAJO DEL PROMEDIO GRAL: \n\n");
	
	int sum;
	for(j=1;j<=N;j++)
	{
		sum =0;
		for (i=1;i<=M;i++)
		{
			sum = sum + A[i][j];
		}
		if (sum < prom)
		{
			printf("\n\n Importe de ventas del Articulo %d : %d",j,sum);
		}
		else
		{
		}
		
	}
}

