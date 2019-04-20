#include <stdio.h>

#define LIBRE 0
#define OCUPADO 1

typedef struct
{
    int legajo;
    char nombre[20];
    char sexo;
    float sueldoBruto;
    float sueldoNeto;
    int estado;
} eEmpleado;

void mostrarEmpleado(eEmpleado);
void cargarEmpleado(eEmpleado[], int);
void mostrarListaEmpleados(eEmpleado[], int);
void BorrarEmpleado(eEmpleado[],int,int);
int buscarLibre(eEmpleado[], int);
void inicializarEmpleados(eEmpleado[], int);
void hardcodearDatosEmpleados(eEmpleado[], int);
int buscarUnEmpleado(eEmpleado[],int ,int);
void ModificarDatos(eEmpleado[],int, int );
void MenuModificar(eEmpleado[],int);
