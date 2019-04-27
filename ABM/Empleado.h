#include <stdio.h>

#define LIBRE 0
#define OCUPADO 1

typedef struct
{
    int idSector;
    char descripcion[20];
    float valor;
    int estado;
}eSector;
typedef struct
{
    int idSector;
    int contadorEmp;
    float acumSueldos;
}eSectorAux;
typedef struct
{
    int legajo;
    char nombre[20];
    char sexo;
    int cantidadHoras;
    int idSector;
    float sueldoBruto;
    float sueldoNeto;
    int estado;
} eEmpleado;

void mostrarEmpleado(eEmpleado,eSector[], int );
void cargarEmpleado(eEmpleado[], int, eSector[],int);
void mostrarListaEmpleados(eEmpleado [], int,eSector[], int );
void BorrarEmpleado(eEmpleado[],int,int);
int buscarLibre(eEmpleado[], int);
void inicializarEmpleados(eEmpleado[], int);
void hardcodearDatosEmpleados(eEmpleado[], int);
int buscarUnEmpleado(eEmpleado[],int ,int);
void ModificarDatos(eEmpleado[],int, int );
void MenuModificar(eEmpleado[],int);
int getLegajoAleatorio(eEmpleado[],int,int);

float BuscarMayorSueldo(eEmpleado[],int);
void MostrarMayorSueldo(eEmpleado[],int,eSector[], int );
int contarCarlos(eEmpleado[],int);

float calcularSueldo(eEmpleado,eSector[],int);

int pedirSector(eSector[],int);
void mostrarEmpleadosPorSector(eSector[],int ,eEmpleado[],int);

void harcodearSectores(eSector[],int);
void inicializarSectores(eSector[],int);
void cargaAuxiliar(eSector[],int,eSectorAux[]);
void acumularSueldos(eEmpleado[],int,eSector[],int,eSectorAux[],int);
void MostrarSectorConMayorSueldo(eSector[],int,eSectorAux[]);
void MostrarCantidadDeEmpleados(eSector[],int,eSectorAux[]);
