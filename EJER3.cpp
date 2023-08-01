#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int VERIFICAR(float A[50][50], int i, int j);
float MAYOR(float A[50][50],int M,int N);
void MOSTRAR(float A[50][50], int M, int N);
int i,j;
main()

{
	int M,N,ver;
	float A[50][50],may;
	
	printf("Ejercicio 3");
	printf("\n\n Ingrese la cantidad de filas: ");
	scanf("%d",&M);
	printf("\n\n Ingrese la cantidad de columnas: ");
	scanf("%d",&N);
	
	for(i=0;i<M;i++)
	{
		for (j=0;j<N;j++)
		{
			printf("\n Ingrese el elemento %d %d de la matriz: ",i,j);
			scanf("%f",&A[i][j]);
			ver= VERIFICAR(A,i,j);
			if (ver == 0)
			{
				printf("\n\n El numero ingresado es entero");
				printf("\n Puse una tecla para continuar");
				getch();
			}
			else
			{
				printf("\n\n El numero ingresado es real");
				printf("\n Puse una tecla para continuar");
				getch();
			}
		}
	}
	may = MAYOR (A,M,N);
	system("CLS");
	printf("El elemento mayor ingresado es %.2f",may);
	MOSTRAR (A,M,N);
	getch();
	
}

int VERIFICAR(float A[50][50], int i, int j)
{
	int div , ver;
	float resul ;
	
	div = A[i][j]/1;
	resul = A[i][j]-div;
	
	if (resul==0)
	{
		ver = 0;
	}
	else
	{
		ver = 1;
	}
	return ver;
}

float MAYOR(float A[50][50],int M,int N)
{
	float may;
	may =0;
	for (i=0;i<M;i++)
	{
		for (j=0;j<N;j++)
		{
			if (A[i][j]>may)
			{
				may = A[i][j];
				
			}
			else
			{
			}
		}
	}
	return may;
}

void MOSTRAR(float A[50][50], int M, int N)
{
	printf("\n\n La matriz resultante es :\n\n");
	{
		for(i=0;i<M;i++)
		{
			for(j=0;j<N;j++)
			{
				printf("  %.2f  ",A[i][j]);
			}
			printf("\n");
		}
	}
}

