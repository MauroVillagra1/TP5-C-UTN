#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <ctime>

int PaisVenta (int Matriz[10][10][10]);
void MostrarMatriz(int Matriz[10][10][10]);

main()
{
	int i, j, k, Matriz[10][10][10], NroPais=0;
	srand (time(NULL));
	for(i=0;i<3;i++)
	{
		
		for(j=0;j<2;j++)
		{
			for(k=0;k<4;k++)
			{
				printf("Ingresar valor de ventas del producto [%d] de la sucursal [%d] del pais [%d]: \n", k+1, j+1, i+1);
				scanf("%d", &Matriz[i][j][k]);
		          //Matriz[i][j][k]=1+rand()%9;   //Prueba
			}
		}
		system("cls");
	}
	NroPais=PaisVenta(Matriz);
	printf("\nEl pais con mayor venta es el %d", NroPais);
	MostrarMatriz(Matriz);
}
int PaisVenta (int Matriz[10][10][10])
{
	int i, j, k, MayorVenta=0, NroPais=0, Aux=0;
	for(i=0;i<3;i++)
	{
		for(j=0;j<2;j++)
		{
			for(k=0;k<4;k++)
			{
			MayorVenta=MayorVenta+Matriz[i][j][k];
	          
			}
		}
		if (Aux<MayorVenta)
		{
			Aux=MayorVenta;
			NroPais=i+1;
		}
		MayorVenta=0;
	}
	return NroPais;
}
void MostrarMatriz(int Matriz[10][10][10])
{
	int i, j, k;
	for(i=0;i<3;i++)
	{
          printf("\n\n\t\t\t\t\t--Pais %d--\n", i+1);
		for(j=0;j<2;j++)
		{
		if (j==0)
		{
			printf("\nSurcursales");
			printf("\tProducto 1");
			printf("\tProducto 2");
			printf("\tProducto 3");
			printf("\tProducto 4");
		}
		printf("\n\nSurcursal [%d]", j+1);
			for(k=0;k<4;k++)
			{
                printf("\t\t %d",Matriz[i][j][k]);
	
			}
		}
	}
}
