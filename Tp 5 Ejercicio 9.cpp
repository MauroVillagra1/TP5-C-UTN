#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <ctime>


main()
{
	int Matriz[10][10][10], M=0, N=0, P=0, Aux=0, Nro=0, CantidadPersonas[10], i, j, k;
	srand (time(NULL));
	CantidadPersonas[i]=0;
	printf("Ingresar Cantidad de Hoteles: ");
	scanf("%d", &M);
	printf("\nIngrese Numero de Piso: ");
	scanf("%d", &N);
	printf("\nIngrese Numero de Habitacion: ");
	scanf("%d", &P);
	
	for(i=0;i<M;i++)
	{
		CantidadPersonas[i]=0;
		printf("\n\nMatriz [%d]", i+1);
		for(j=0;j<N;j++)
		{
			printf("\n\n");
			for(k=0;k<P;k++)
			{
	               Matriz[i][j][k]=1+rand()%3; 
	               printf("\t%d",Matriz[i][j][k]);
	               CantidadPersonas[i]=CantidadPersonas[i]+ Matriz[i][j][k];
			}
		}
	}
	for(i=0;i<M;i++)
	{
		if (CantidadPersonas[i]>Aux)
		{
			Aux=CantidadPersonas[i];
			Nro=i+1;
		}
	}
	printf("\n\nEl hotel con mayor cantidad de huesped es el [%d], con [%d] huesped", Nro,Aux);
	
	
}
