
#include <stdlib.h>
#include "Empleado.h"

#define T 10


int menuDeOpciones(char[]);
void ModificarDatos(eEmpleado[],int, int );
int PedirEntero(char [],int);
float PedirFlotante(char[],float);
void MenuModificar(eEmpleado[],int);
void BorrarEmpleado(eEmpleado[],int,int);


int main()
{
    int opcion;

    int NroLegajo;

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
            case 2:
                NroLegajo=PedirEntero("Ingrese Nro de Legajo: ",NroLegajo);
                BorrarEmpleado(lista,T,NroLegajo);

            break;
            case 3:
                  NroLegajo=PedirEntero("Ingrese Nro de Legajo: ",NroLegajo);
                  ModificarDatos(lista,T,NroLegajo);
                break;
            case 4:
                mostrarListaEmpleados(lista, T);
                break;

        }
    }while(opcion!=5);


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


    int indice;

                  indice=buscarUnEmpleado(lista,T,legajo);
                  if (indice!=-1)
                  {
                      MenuModificar(lista,indice);
                  }
                  else
                  {
                      printf("No Existe");
                  }
}
int PedirEntero(char mensaje[],int entero)
{

    printf("%s", mensaje);
    scanf("%d", &entero);
    return entero;
}
/*float PedirFlotante(char mensaje[],float flotante)
{
    printf("%s", mensaje);
    scanf("%f", &flotante);
    return flotante;
}*/
void MenuModificar(eEmpleado lista[],int indice)
{
    int opcion;
    do
    {
        opcion = menuDeOpciones("1.Nombre\n2.Sexo\n3.Sueldo Bruto\n4.Salir\nElija una opcion a modificar: ");
        switch(opcion)
        {
            case 1:
                printf("Ingrese Nuevo Nombre: ");
                fflush(stdin);
                scanf("%[^\n]",lista[indice].nombre);

            break;
            case 2:
                printf("Ingrese Nuevo sexo: ");
                scanf("%c",&lista[indice].sexo);
                break;
            case 3:
                printf("Ingrese Nuevo Sueldo Bruto: ");
                scanf("%f",&lista[indice].sueldoBruto);
                lista[indice].sueldoNeto=lista[indice].sueldoBruto*0.85;
                break;

        }
    }while(opcion!=4);

}
void BorrarEmpleado(eEmpleado lista[],int tam,int legajo)
{
    int indice;

    indice=buscarUnEmpleado(lista,T,legajo);
    if (indice!=-1)
    {
        lista[indice].estado=LIBRE;
    }

}
