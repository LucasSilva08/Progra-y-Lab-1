
#include <stdlib.h>
#include "Empleado.h"

#define T 10


int menuDeOpciones(char[]);
void ModificarDatos(eEmpleado[],int, int );

int main()
{


    int opcion;

    int NroEmpleado;




    eEmpleado lista[T];
    inicializarEmpleados(lista,T);


hardcodearDatosEmpleados(lista,4);
    do
    {
        opcion = menuDeOpciones("1.Alta\n2.Baja\n3.Modificar\n4.Mostrar\n5.Salir\nElija una opcion: ");
        switch(opcion)
        {
            case 1:
                cargarEmpleado(lista,  T);

            break;
            case 3:
                  printf("Ingrese Nro de Empleado a Modificar: ");
                  scanf("%d",&NroEmpleado);

                  ModificarDatos(lista,T,NroEmpleado);
                break;
            case 4:
                mostrarListaEmpleados(lista, T);
                break;

        }
    }while(opcion!=5);



    //inicializarEmpleados(lista, T);




    return 0;
}

int menuDeOpciones(char mensaje[])
{
    int opcion;
    printf("%s", mensaje);
    scanf("%d", &opcion);

    return opcion;
}
void ModificarDatos(eEmpleado lista [],int tam, int legajo)
{

    float AuxEmpleado;
    int indice;

                  indice=buscarUnEmpleado(lista,T,legajo);
                  if(indice!=-1)
                  {
                      printf("Ingrese Nuevo sueldo: ");
                      scanf("%f",&AuxEmpleado);
                      lista[indice].sueldoBruto=AuxEmpleado;
                  }
                  else
                  {
                      printf("Empleado No encontrado\n");
                  }
}
