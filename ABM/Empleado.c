#include "PedirDatos.h"
#include "Empleado.h"
#include <string.h>


void cargarEmpleado(eEmpleado lista[], int tam)
{
    int i;

    i = buscarLibre(lista, tam);
    if(i!=-1)
    {
        lista[i].legajo=pedirEntero("Ingrese Nro de Legajo: ");
        pedirCadena("Ingrese Nombre: ",lista[i].nombre);
        lista[i].sexo=pedirCaracter("Ingrese Sexo: ");
        lista[i].sueldoBruto=pedirFlotante("Ingrese Sueldo Bruto: ");
        lista[i].sueldoNeto =lista[i].sueldoBruto*0.85;
        lista[i].estado = OCUPADO;

    }
    else
    {
        printf("No hay espacio");
    }



}

void mostrarListaEmpleados(eEmpleado lista[], int tam)
{
    int i;
    for(i=0; i<tam; i++)
    {
        if(lista[i].estado!=LIBRE)
        {
            mostrarEmpleado(lista[i]);
        }

    }
}
void mostrarEmpleado(eEmpleado unEmpleado)
{
    printf("%d-%s-%c-%f-%f\n", unEmpleado.legajo,unEmpleado.nombre, unEmpleado.sexo, unEmpleado.sueldoBruto,unEmpleado.sueldoNeto);

}
int buscarLibre(eEmpleado lista[], int tam)
{
    int i;
    int index=-1;
    for(i=0; i<tam; i++)
    {
        if(lista[i].estado==LIBRE)
        {
            index = i;
            break;
        }
    }
    return index;
}
void inicializarEmpleados(eEmpleado lista[], int tam)
{
    int i;
    for(i=0; i<tam; i++)
    {
        lista[i].estado = LIBRE;
    }
}

void hardcodearDatosEmpleados(eEmpleado lista[], int tam)
{
    int i;
    int legajos[]={1,8,9,7,2,4};
    char nombres[][50]={"Carlos","Maria","Carlos","Pedro","Carlos","Mateo"};
    char sexo[]={'M','F','M','M','M','M'};
    float sueldosBruto[]={22000,22000,15000,4000,21000,6000};

    for(i=0; i<tam; i++)
    {
        lista[i].legajo = legajos[i];
        strcpy(lista[i].nombre, nombres[i]);
        lista[i].sexo = sexo[i];
        lista[i].sueldoBruto = sueldosBruto[i];
        lista[i].sueldoNeto = sueldosBruto[i] * 0.85;
        lista[i].estado = OCUPADO;

    }




}
int buscarUnEmpleado(eEmpleado lista[],int tam ,int legajo)
{
    int i;

    int indice =-1 ;
    for(i=0;i<tam;i++)
    {
        if(lista[i].legajo==legajo&&lista[i].estado==OCUPADO)
        {
            indice=i;

            break;
        }

    }

    return indice;

}
void BorrarEmpleado(eEmpleado lista[],int tam,int legajo)
{
    int indice;

    indice=buscarUnEmpleado(lista,tam,legajo);
    if (indice!=-1)
    {
        lista[indice].estado=LIBRE;
    }

}
void ModificarDatos(eEmpleado lista [],int tam, int legajo)
{
    int indice;

                  indice=buscarUnEmpleado(lista,tam,legajo);
                  if (indice!=-1)
                  {
                      MenuModificar(lista,indice);
                  }
                  else
                  {
                      printf("No Existe");
                  }
}
void MenuModificar(eEmpleado lista[],int indice)
{
    char nombre[20];
    char sexo;
    float sueldo;
    int opcion;
    do
    {
        opcion = pedirEntero("1.Nombre\n2.Sexo\n3.Sueldo Bruto\n4.Salir\nElija una opcion a modificar: ");
        switch(opcion)
        {
            case 1:
                pedirCadena("Ingrese Nuevo Nombre: ",nombre);
                strcpy(lista[indice].nombre,nombre);
            break;
            case 2:
                sexo=pedirCaracter("Ingrese Nuevo Sexo: ");
                lista[indice].sexo=sexo;
                break;
            case 3:
                sueldo=pedirFlotante("Ingrese Nuevo Sueldo Bruto: ");
                lista[indice].sueldoBruto=sueldo,
                lista[indice].sueldoNeto=lista[indice].sueldoBruto*0.85;
                break;

        }
    }while(opcion!=4);

}


