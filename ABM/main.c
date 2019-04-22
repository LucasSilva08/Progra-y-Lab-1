
#include <stdlib.h>
#include "Empleado.h"
#include "PedirDatos.h"
#define T 10
#include <string.h>

float BuscarMayorSueldo(eEmpleado[],int);
void MostrarMayorSueldo(eEmpleado[],int);
int contarCarlos(eEmpleado[],int);

int main()
{
    int opcion;
    int NroLegajo;
    eEmpleado lista[T];
    inicializarEmpleados(lista,T);
    hardcodearDatosEmpleados(lista,6);
    do
    {
        opcion = pedirEntero("1.Alta\n2.Baja\n3.Modificar\n4.Mostrar\n5.Informar\n6.Salir\nElija una opcion: ");
        switch(opcion)
        {
            case 1:
                cargarEmpleado(lista,  T);

            break;
            case 2:
                NroLegajo=pedirEntero("Ingrese Nro de Legajo: ");
                BorrarEmpleado(lista,T,NroLegajo);

            break;
            case 3:
                  NroLegajo=pedirEntero("Ingrese Nro de Legajo: ");
                  ModificarDatos(lista,T,NroLegajo);
                break;
            case 4:
                mostrarListaEmpleados(lista, T);
                break;
            case 5:
                MostrarMayorSueldo(lista,T);
                printf("La cantidad de carlos es: %d\n",contarCarlos(lista,T));

                break;

        }
    }while(opcion!=6);
    return 0;
}
float BuscarMayorSueldo(eEmpleado lista[],int tam)
{
    int i;
    int mayorSueldo;

    mayorSueldo=lista[0].sueldoBruto;
    for (i=0;i<tam;i++)
    {
        if (lista[i].estado==OCUPADO)
        {
           if (lista[i].sueldoBruto>mayorSueldo)
        {
            mayorSueldo=lista[i].sueldoBruto;


        }
        }

    }
     return mayorSueldo;
}
void MostrarMayorSueldo(eEmpleado lista[],int tam)
{
   int i;

   float maximoSueldo;
   maximoSueldo=BuscarMayorSueldo(lista,tam);
   for(i=0;i<tam;i++)
   {
       if(lista[i].estado==OCUPADO)
       {
           if(lista[i].sueldoBruto==maximoSueldo)
       {
           mostrarEmpleado(lista[i]);
       }
       }

   }


}
int contarCarlos(eEmpleado lista[],int tam)
{
    int i;
    int contador=0;

    for(i=0;i<tam;i++)
    {
        if (lista[i].estado==OCUPADO)
        {
            if(stricmp(lista[i].nombre,"carlos")==0 && lista[i].sueldoBruto>20000)
            {
                contador++;
            }
        }
    }
    return contador;
}

