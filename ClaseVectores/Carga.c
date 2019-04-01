#include <stdio.h>
#include <stdlib.h>
#include "Carga.h"


void CargarVector(int numeros[],int tam)
{
   int i;

   for (i=0 ;i<tam; i++)
   {
    printf("Ingrese un Numero: ");
    scanf("%d",&numeros[i]);
   }


}
int buscarMaximo(int numeros[],int tam)

{
    int i;
    int numeroMax;
    int flag=0;
    for (i=1; i<tam;i++)
    {
        if (flag==0||numeros[i]>numeroMax)
        {
            numeroMax=numeros[i];
            flag=1;

        }
    }
    return numeroMax;

}
int buscarValor(int numeros[],int tam,int valor)
{
    int i;
    int indice=-1;


    for (i=0;i<tam;i++)
    {
        if (numeros[i]==valor)
        {
            indice=i;
        }

    }
    return indice;
}
