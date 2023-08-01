#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

void CargaMatriz (int Matriz[10][10]);
int CalculoMayor(int Matriz[10][10],int &Aux2);
void ListarMatriz (int Matriz[10][10]);

main()
{
	int Matriz[10][10], i=0, j=0, Mayor=0, Aux2;
	CargaMatriz(Matriz);
	Mayor=CalculoMayor(Matriz, Aux2);
	ListarMatriz(Matriz);
	printf("\n\nEl Elemento de Mayor es de [%d]", Mayor);
	printf("\n\nEl Elemento de Menor es de [%d]", Aux2);
}

void CargaMatriz (int Matriz[10][10])
{
	int i, j;
	for (i=0;i<4;i++)
	{
		for (j=0;j<3;j++)
		{
			printf("Ingrese Valor del elemento [%d][%d] de la Matriz:", i+1, j+1);
			scanf("%d", &Matriz[i][j]);
		}
	}
}
int CalculoMayor(int Matriz[10][10], int &Aux2)
{
	int i, j, Aux=0;
	Aux2=9999;
	for(i=0;i<4;i++)
	{
		for(j=0;j<3;j++)
		{
			if(Aux<Matriz[i][j])
			{
				Aux=Matriz[i][j];
			}
		}
	}
	for(i=0;i<4;i++)
	{
		for(j=0;j<3;j++)
		{
			if(Aux2>Matriz[i][j])
			{
				Aux2=Matriz[i][j];
			}
		}
	}
	return Aux;
}
void ListarMatriz (int Matriz[10][10])
{
	int i, j;
	for (i=0;i<4;i++)
	{
		printf("\n\n");
		for (j=0;j<3;j++)
		{
			printf("\t%d-",Matriz[i][j]);
		}
	}
}
