#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int i,j,k;
void CARGA(int A[50][50][50],int M,int N,int P);
void SUMA(int A[50][50][50],int M,int N,int P,int V[50]);
void MOSTRAR(int V[50], int P);
float PROMEDIO(int V[50],int P);
main()
{
      int A[50][50][50], V[50], M, N, P;
      float prom;
      
      printf("Indique la cantidad de filas:  ");
      scanf("%d",&M);
      printf("\n\nIndique la cantidad de columnas:  ");
      scanf("%d",&N);
      printf("\n\n Indique la profundidad del arreglo:  ");
      scanf("%d",&P);
      
      CARGA(A,M,N,P);
      SUMA (A,M,N,P,V);
      MOSTRAR(V,P);
      prom = PROMEDIO(V,P);
      system("CLS");
      printf("\a El promedio del vector es : %.2f",prom);
      
      
      getch();
      
}
void CARGA(int A[50][50][50],int M,int N,int P)
{
     for(k=0;k<P;k++)
     {
                     for(i=0;i<M;i++)
                     {
                                     for(j=0;j<N;j++)
                                     {
                                                     printf("\n\n Ingrese el valor %d %d de la parte %d del arreglo: ",i,j,k);
                                                     scanf("%d",&A [i][j][k]);
                                     }
                     }
     }
}
void SUMA(int A[50][50][50],int M,int N,int P,int V[50])
{
     int S;
     
     for(k=0;k<P;k++)
     {
                     S =0;
                     for(i=0;i<M;i++)
                     {
                                     for(j=0;j<N;j++)
                                     {
                                                     S = S + A[i][j][k];
                                     }
                     }
                     V[k]=S;
     }
}
void MOSTRAR(int V[50], int P)
{
     system("CLS");
     printf("\a El vector creado es: \n\n");
     for(k=0;k<P;k++)
     {
                     printf("%d\t",V[k]);
     }
     getch();
}                                                                                                  
float PROMEDIO(int V[50],int P)
{
          float suma,prom;
         suma = 0;
         for(k=0;k<P;k++)
         {
                         suma = suma + V[k];
         }
         prom = suma /P;
         return prom ;
}  

     
