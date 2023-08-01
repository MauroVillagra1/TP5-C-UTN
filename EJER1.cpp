#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
void carga (int C[100] [100],int M,int N);
int MAYOR (int C[100][100], int M,int N);
int MENOR (int C[100][100], int M,int N);
void MUESTRA (int C[100][100],int M,int N);
int i,j;
main()
{
	int A[100] [100],may, men,M,N;
	M = 4;
	N = 3;
	
	printf("BIENVENIDO");
	system ("CLS");
	carga (A,M,N);
	may = MAYOR(A,M,N);
	men = MENOR(A,M,N);
	system("CLS");
	printf("\n El mayor elemento cargado es: %d y el menor cargado es :  %d ",may,men);
	getch();
	system ("CLS");
	MUESTRA(A,M,N);
	
	
	getch();
}

void carga (int C[100] [100],int M,int N)
{
	for(i=0;i<M;i++)
	{
		for (j=0;j<N;j++)
		{
			printf("\n\n Ingrese el valor del elemento %d %d:  ",i,j);
			scanf("%d",&C[i][j]);
			
		}
	}
}

int MAYOR (int C[100][100], int M,int N)
{
	int may;
	may = 0;
	for (i=0;i<M;i++)
	{
		for (j=0;j<N;j++)
		{
			if(C[i][j]>may)
			{
				may = C[i][j];
			} 
		}
	}
	return may;
}

int MENOR (int C[100][100], int M,int N)
{
	int men;
	men = 99999999;
	for (i=0;i<M;i++)
	{
		for (j=0;j<N;j++)
		{
			if(C[i][j]<men)
			{
				men = C[i][j];
			} 
		}
	}
	return men;
}

void MUESTRA (int C[100][100],int M,int N)
{
	printf("La matriz resultante es : \n\n");
	for(i=0;i<M;i++)
	 {
	 	for(j=0;j<N;j++)
	 	{
	 		printf(" %d -",C[i][j]);
	 	}
	 	printf ("\n");
	 }
	 
}

