#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
void CARGA (int A[50][50][50],int M, int N, int P);
int MAYOR (int A[50][50][50],int M, int N, int P);
void LISTAR (int A[50][50][50],int M, int N, int P);
int i,j,k;
main()
{
	printf("EJERCICIO 7");
	int A[50][50][50],M,N,P,may;
	M=2;
	N=4;
	P=3;
	CARGA (A,M,N,P);
	may = MAYOR(A,M,N,P);
	system("CLS");
	printf("EJERCICIO 7");
	printf("\n\n El pais que mas vendio es el pais numero %d ",may);
	getch();
	LISTAR (A,M,N,P);
	getch();
	
}

void CARGA (int A[50][50][50],int M, int N, int P)
{
	for(k=1;k<=P;k++)
	{
		for(i=1;i<=M;i++)
		{
				for(j=1;j<=N;j++)
				{
					printf("\n\n Ingrese la cantidad de ventas obtenidas por la sucursal %d con respecto al producto %d en el pais %d:  ",i,j,k);
					scanf("%d",&A[i][j][k]);
					
				}
		}
	}
}

int MAYOR (int A[50][50][50],int M, int N, int P)
{  int sum,may, pais;
	may = 0;	
		for(k=1;k<=P;k++)
	{
		sum =0;
		for(i=1;i<=M;i++)
		{
				for(j=1;j<=N;j++)
				{
				    sum = sum + A[i][j][k];	
				}
				
				
		}
		if (sum > may)
				{
					may = sum;
					pais =k;
				}
				else
				{
				}
		
	}
	return pais;
}
void LISTAR (int A[50][50][50],int M, int N, int P)
{
		int sum;
		system ("CLS");
		printf("EJERCICIO 7");
		printf("\n\nLISTADO DE TOTAL DE VENTAS DE LAS SUCURSALES:");
		
		for(k=1;k<=P;k++)
	{
		for(i=1;i<=M;i++)
		{
			sum =0;
				for(j=1;j<=N;j++)
				{
					sum = sum + A[i][j][k];	
				}
				printf("\nTotal de ventas de la sucursal %d del pais %d :  %d",i,k,sum);
		}
		
	}
}


