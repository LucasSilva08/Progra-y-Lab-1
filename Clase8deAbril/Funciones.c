#include <stdio.h>
#include <stdlib.h>
#include "Funciones.h"


void OrdenarVector (int numeros[],int tam)

{
    int i,j,aux;
    for(i=0;i<tam-1;i++)//me muevo por debajo del vector
    {
        for(j=i+1;j<tam;j++)//me muevo por arriba del vector a la par de i
        {
            printf("Para i= %d, para j= %d\n",numeros[i],numeros[j]);
            if(numeros[i]>numeros[j])//criterio
            {
                aux=numeros[i];//con un auxiliar guardo el valor a acomodar para no perder el valor
                numeros[i]=numeros[j];
                numeros[j]=aux;
            }
        }
    }
}

void MostrarVector(int numeros[],int tam)
{
    int i;
    for(i=0;i<tam;i++)
    {
        printf("%d",numeros[i]);
    }
}
