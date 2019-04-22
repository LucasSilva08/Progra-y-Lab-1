#include <stdio.h>
#include <stdlib.h>
#define T 5

typedef struct
{
    int IdSector;
    char descripcion [30];
}sSector;

typedef struct
{
    int legajo;
    char nombre[20];
    char sexo;
    float sueldoBruto;
    float sueldoNeto;
    sSector Sector;
    int estado;
} eEmpleado;


int main()
{
   eEmpleado lista[T];

   lista[0].Sector.IdSector=50;

   printf("%d",lista[0].Sector.IdSector);
}
