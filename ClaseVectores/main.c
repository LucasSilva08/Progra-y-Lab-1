#include <stdio.h>
#include <stdlib.h>
#include "Mostrar.h"
#include "Carga.h"
#define T 5
int main()
{
    int numeros[T];
    CargarVector(numeros,T);
    MostrarVector(numeros,T);


  /* int numeros[5];
   int i;

   //printf("%d--%d",numeros,&numeros);

   for(i=0;i<5;i++)
   {
       printf("Ingrese un numero: ");
       scanf("%d", &numeros[i]);
   }
   for(i=0;i<5;i++)
   {
       printf("%d\n",numeros[i]);

   }*/




    return 0;
}
