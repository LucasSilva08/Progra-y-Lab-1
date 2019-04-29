#include "PedirDatos.h"
#include "Empleado.h"
#include <string.h>
#include <stdlib.h>

void cargarEmpleado(eEmpleado lista[], int tam, eSector sectores[],int ts)
{
    int i;
    i = buscarLibre(lista, tam);
    if(i!=-1)
    {
            lista[i].legajo=legajoAlatorio(lista,tam);
            pedirCadena("Ingrese Nombre: ",lista[i].nombre);
            lista[i].sexo=pedirCaracter("Ingrese Sexo: ");
            lista[i].idSector=pedirSector(sectores,ts);
            lista[i].cantidadHoras=pedirEntero("Ingrese Cantidad de Hrs Laborales: ");
            lista[i].sueldoBruto=calcularSueldo(lista[i],sectores,ts);
            lista[i].sueldoNeto =lista[i].sueldoBruto*0.85;
            lista[i].estado = OCUPADO;
    }
    else
    {
        printf("NO HAY ESPACIO!!\n");
    }
}
int legajoAlatorio(eEmpleado lista[],int tam)
{
    int legajo;
    legajo=getNumeroAleatorio(1,7,1);
    while(buscarUnEmpleado(lista,tam,legajo)!=-1)
    {
        legajo=getNumeroAleatorio(1,7,1);
    }
    return legajo;
}

void mostrarListaEmpleados(eEmpleado lista[], int tam,eSector sectores[], int ts)
{
    int i;
    for(i=0; i<tam; i++)
    {
        if(lista[i].estado!=LIBRE)
        {
            mostrarEmpleado(lista[i],sectores, ts);
        }
    }
}
void mostrarEmpleado(eEmpleado unEmpleado,eSector sectores[], int ts)
{
    char descripcionSector[20];
    int i;

    for(i=0; i<ts; i++)
    {
        if(unEmpleado.idSector==sectores[i].idSector)
        {
            strcpy(descripcionSector, sectores[i].descripcion);
            break;
        }
    }
    printf("%d-%s-%c-%f-%f-%s\n", unEmpleado.legajo,unEmpleado.nombre, unEmpleado.sexo, unEmpleado.sueldoBruto,unEmpleado.sueldoNeto,descripcionSector);
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
    int sector[]={1,2,3,1,2,2};
    int horas[]={50,60,50,60,40,55};

    for(i=0; i<tam; i++)
    {
        lista[i].legajo = legajos[i];
        strcpy(lista[i].nombre, nombres[i]);
        lista[i].sexo = sexo[i];
        lista[i].sueldoBruto = sueldosBruto[i];
        lista[i].sueldoNeto = sueldosBruto[i] * 0.85;
        lista[i].estado = OCUPADO;
        lista[i].idSector = sector[i];
        lista[i].cantidadHoras=horas[i];
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
void MostrarMayorSueldo(eEmpleado lista[],int tam,eSector sectores[], int ts)
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
           mostrarEmpleado(lista[i],sectores, ts);
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
float calcularSueldo(eEmpleado unEmpleado,eSector sectores[],int ts)
{

    int i;
    float sueldo;
    for (i=0;i<ts;i++)
    {
        if(unEmpleado.estado==LIBRE)
        {
            if(unEmpleado.idSector==sectores[i].idSector)
            {
                sueldo=unEmpleado.cantidadHoras*sectores[i].valor;
                break;
            }
        }
    }
    return sueldo;
}

int pedirSector(eSector sectores[],int tam)
{
    int i;
    int sector;
    printf("Ingrese un Sector: \n");
    for(i=0;i<tam;i++)
    {
        printf("%d--%s\n",sectores[i].idSector,sectores[i].descripcion);
    }
    scanf("%d",&sector);
    return sector;
}
void mostrarEmpleadosPorSector(eSector sectores [],int ts, eEmpleado lista[],int te)
{
    int j;
    int i;
    for(i=0;i<ts;i++)
    {
        printf("\n%s: \n",sectores[i].descripcion);
        for(j=0;j<te;j++)
        {
           if(sectores[i].idSector==lista[j].idSector)
           {
               mostrarEmpleado(lista[j],sectores,ts);
           }
        }
    }
}
void harcodearSectores(eSector sectores[],int ts)
{
    int i;
    int idSectores[]={1,2,3};
    char descripcion[][50]={"Contabilidad","Sistemas","RRHH"};
    float valor[]={100,200,150};

    for(i=0;i<ts;i++)
    {
        sectores[i].idSector=idSectores[i];
        strcpy(sectores[i].descripcion,descripcion[i]);
        sectores[i].valor=valor[i];
        sectores[i].estado=OCUPADO;
    }
}
void inicializarSectores(eSector sectores[],int ts)
{
   int i;
    for(i=0; i<ts; i++)
    {
        sectores[i].estado = LIBRE;
    }
}
void cargaAuxiliar(eSector sectores[],int ts,eSectorAux Auxiliar[])
{
    int i;

    for(i=0;i<ts;i++)
    {
        if(sectores[i].estado==OCUPADO)
        {
            Auxiliar[i].idSector=sectores[i].idSector;
            Auxiliar[i].contadorEmp=0;
            Auxiliar[i].acumSueldos=0;
        }
    }
}
void acumularSueldos(eEmpleado lista[],int te,eSector sectores[],int ts,eSectorAux Auxiliar[],int ta)
{
    int i;
    int j;

    cargaAuxiliar(sectores,ts,Auxiliar);
    for(i=0;i<ta;i++)
    {
        for (j=0;j<te;j++)
        {
            if(Auxiliar[i].idSector==lista[j].idSector&&lista[j].estado==OCUPADO)
            {
                Auxiliar[i].acumSueldos=Auxiliar[i].acumSueldos+lista[j].sueldoBruto;
                Auxiliar[i].contadorEmp++;
            }
        }
    }
}
void MostrarSectorConMayorSueldo(eSector sectores[],int ts,eSectorAux Auxiliar[])
{
     int i;
     for(i=0;i<ts;i++)
    {
        if(sectores[i].idSector==Auxiliar[i].idSector&&sectores[i].estado==OCUPADO)
        {
            printf("%s: %f\n",sectores[i].descripcion,Auxiliar[i].acumSueldos);
        }
    }
}
int BuscarMaximoEmpleados(eSectorAux Auxiliar[],int ts)
{
   int i;
   int max;
   int flag=0;

   for(i=0;i<ts;i++)
   {
       if(flag==0||Auxiliar[i].contadorEmp>max)
       {
           max=Auxiliar[i].contadorEmp;
           flag=1;
       }
   }
   return max;
}
void MostrarSectorConMasEmpleados(eSector sectores[],int ts,eSectorAux Auxiliar[])
{
     int i;
     int max;
     max=BuscarMaximoEmpleados(Auxiliar,ts);
     for(i=0;i<ts;i++)
    {
        if(sectores[i].idSector==Auxiliar[i].idSector&&Auxiliar[i].contadorEmp==max)
        {
            printf("Sector: %s\n",sectores[i].descripcion);
        }
    }
}



