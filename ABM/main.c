
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
    eSector sectores[3] = {{1,"Contabilidad",100},{2,"Sistemas",200},{3, "RRHH", 150}};
    //hardcodearDatosEmpleados(lista,6);
    do
    {
        opcion = pedirEntero("1.Alta\n2.Baja\n3.Modificar\n4.Mostrar\n5.Informar\n6.Salir\nElija una opcion: ");
        switch(opcion)
        {
            case 1:
                cargarEmpleado(lista,T,sectores,3);

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
                mostrarListaEmpleados(lista, T,sectores,3);
                break;
            case 5:
                 MostrarMayorSueldo(lista,T,sectores,3);
                 printf("La cantidad de carlos es: %d\n",contarCarlos(lista,T));

                break;

        }

    }while(opcion!=6);
    return 0;
}




