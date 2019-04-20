
#include <stdlib.h>
#include "Empleado.h"
#include "PedirDatos.h"
#define T 10
#include <string.h>


int main()
{
    int opcion;
    int NroLegajo;
    eEmpleado lista[T];
    inicializarEmpleados(lista,T);
    //hardcodearDatosEmpleados(lista,4);
    do
    {
        opcion = pedirEntero("1.Alta\n2.Baja\n3.Modificar\n4.Mostrar\n5.Salir\nElija una opcion: ");
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

        }
    }while(opcion!=5);
    return 0;
}


