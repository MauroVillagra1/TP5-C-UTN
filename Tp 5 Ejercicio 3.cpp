#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <ctime>

void CalcularTaller (int Matriz[10][10], int N, int &NroTaller);

main()
{
	char texto[100];
	
	int N=0, i=0, j=0, Matriz[10][10], Pantalones=0, Remeras=0, Camisas=0, NroTaller=0;
	srand (time(NULL));
	printf("Ingresar Numero de talleres: ");
	scanf("%d", &N);
	
	
	for (i=0;i<N;i++)
	{
		for (j=0;j<3;j++)
		{
			if (j==0)
			{
			 Matriz[i][j]=1+rand()%50;
			 Pantalones=Pantalones+Matriz[i][j];
			    
			}
			if (j==1)
			{
			 Matriz[i][j]=1+rand()%50;
			 Remeras=Remeras+Matriz[i][j];
			}
			if(j==2)
			{
			 Matriz[i][j]=1+rand()%50;
			 Camisas=Camisas+Matriz[i][j];
			}
		}
	}
		for (i=0;i<N;i++)
	{
		if (i==0)
		{
			printf("\nTalleres");
			printf("   Pantalones");
			printf("  Remeras ");
			printf("Camisas");
		}
		printf("\n\nTaller [%d]", i+1);
	
		for (j=0;j<3;j++)
		{
			printf("\t %d",Matriz[i][j]);
		}
	}

	printf("\nLa cantidad producida de Pantalones: [%d] ", Pantalones);
	printf("\nLa cantidad producida de Remeras: [%d]", Remeras);
	printf("\nLa cantidad producida de Camisas: [%d]", Camisas);
	CalcularTaller(Matriz, N, NroTaller);
	printf("\nEl taller que mas recaudo es: [%d]", NroTaller);

	
}
void CalcularTaller (int Matriz[10][10], int N, int &NroTaller)
{
     int i, j, Aux=0, Talleres=0;
	for (i=0;i<N;i++)
	{
		for (j=0;j<3;j++)
		{
             Talleres=Matriz[i][j]+Talleres;
		}
	if (Aux<Talleres)
     {
     NroTaller=i+1;       	
     }
     Talleres=0;
	}
}


