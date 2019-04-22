#include "PedirDatos.h"
#include "Empleado.h"
#include <string.h>
#include <stdlib.h>

void cargarEmpleado(eEmpleado lista[], int tam)
{
    int i;
    int Auxlegajo;

    i = buscarLibre(lista, tam);
    if(i!=-1)
    {
        Auxlegajo=pedirEntero("Ingrese Nro de Legajo: ");
        if (buscarUnEmpleado(lista,tam,Auxlegajo)!=-1)
        {
            printf("YA EXISTE LEGAJO!!!\n");

        }
        else
        {
            lista[i].legajo=Auxlegajo;
            pedirCadena("Ingrese Nombre: ",lista[i].nombre);
            lista[i].sexo=pedirCaracter("Ingrese Sexo: ");
            lista[i].sueldoBruto=pedirFlotante("Ingrese Sueldo Bruto: ");
            lista[i].sueldoNeto =lista[i].sueldoBruto*0.85;
            lista[i].estado = OCUPADO;
        }


    }
    else
    {
        printf("NO HAY ESPACIO!!\n");
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
    char confirmar;
    indice=buscarUnEmpleado(lista,tam,legajo);
    if (indice!=-1)
    {
        confirmar=pedirCaracter("Estas seguro que desea dar de BAJA? (s/n): ");
        if (confirmar=='s')
        {
            lista[indice].estado=LIBRE;
        }

    }
    else
    {
        printf("NO SE ENCONTRO!!\n");
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
                      printf("NO SE ENCONTRO!!!\n");
                  }
}
void MenuModificar(eEmpleado lista[],int indice)
{
    char nombre[20];
    char sexo;
    float sueldo;
    int opcion;
    char confirmar;
    do
    {
        opcion = pedirEntero("1.Nombre\n2.Sexo\n3.Sueldo Bruto\n4.Salir\nElija una opcion a modificar: ");
        switch(opcion)
        {
            case 1:
                confirmar=pedirCaracter("Estas seguro que desea modificar el NOMBRE? (s/n): ");
                if(confirmar=='s')
                {
                    pedirCadena("Ingrese Nuevo Nombre: ",nombre);
                    confirmar=pedirCaracter("Estas seguro que desea modificar el NOMBRE? (s/n): ");
                    if(confirmar=='s')
                    {
                        strcpy(lista[indice].nombre,nombre);
                    }
                    else
                    {
                         break;
                    }
                }
            break;
            case 2:
                confirmar=pedirCaracter("Estas seguro que desea modificar el SEXO? (s/n): ");

                if (confirmar=='s')
                {
                    sexo=pedirCaracter("Ingrese Nuevo Sexo: ");
                    confirmar=pedirCaracter("Estas seguro que desea modificar el SEXO? (s/n): ");
                    if (confirmar=='s')
                    {
                        lista[indice].sexo=sexo;
                    }
                    else
                    {
                        break;
                    }
                }
                break;
            case 3:
                confirmar=pedirCaracter("Estas seguro que desea modificar el SUELDO BRUTO? (s/n): ");
                if (confirmar=='s')
                {
                    sueldo=pedirFlotante("Ingrese Nuevo Sueldo Bruto: ");
                    confirmar=pedirCaracter("Estas seguro que desea modificar el SUELDO BRUTO? (s/n): ");
                    if (confirmar=='s')
                    {
                        lista[indice].sueldoBruto=sueldo,
                        lista[indice].sueldoNeto=lista[indice].sueldoBruto*0.85;
                    }
                    else
                    {
                        break;
                    }
                }
                break;
        }


    }while(opcion!=4);

}


