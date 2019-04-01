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
