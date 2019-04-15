#include <stdio.h>
#include <stdlib.h>
#define T 2
#define OCUPADO 1
#define LIBRE 0

    typedef struct //en el campus aparece asi solo con struct
{
    int legajo;
    char nombre[20];
    char sexo;
    float sueldoBruto;
    float suledoNeto;
    int Estado;
}eEmpleado;

void mostrarEmpleado(eEmpleado);// las funciones se declaran despues de las estructuras
void cargarEmpleado(eEmpleado[],int);
void mostrarTodosLosEmpleados(eEmpleado[],int);
void pedirLegajo(char[],int);
void mostarMenu(eEmpleado[],int);
int buscarLibre(eEmpleado[],int);
void inicializarEmpleados(eEmpleado[],int);

int main()
{





    //eEmpleado unEmpleado;//va la esctructura y le asigno un nombre
    //eEmpleado otroEmpleado;
    eEmpleado Lista[T];
    int indice;

    inicializarEmpleados(Lista,T);




   //cargarEmpleado(Lista,T);
   //mostrarTodosLosEmpleados(Lista,T);
   mostarMenu(Lista,T);




    //otroEmpleado=unEmpleado;//copia los valores de la esctuctura en la otra es decir se genera una copia en memoria
    //unEmpleado.legajo=7000; // se modifica el valor de un campo de la estuctura pero no cambia la copia;





    return 0;
}
void mostrarEmpleado(eEmpleado miEmpleado)
{
    printf("%d--%s--%c--%f--%f\n",miEmpleado.legajo,miEmpleado.nombre,miEmpleado.sexo,miEmpleado.sueldoBruto,miEmpleado.suledoNeto);
}

void cargarEmpleado(eEmpleado miEmpleado[],int tam)
{
    int i;

    int indice;



    indice=buscarLibre(miEmpleado,tam);

    printf("Ingrese Legajo: ");
    scanf("%d",&miEmpleado[i].legajo);
    printf("Ingrese Nombre: ");
    fflush(stdin);
    scanf("%[^\n]",miEmpleado[i].nombre);
    printf("Ingrese Sexo M o F: ");
    fflush(stdin);
    scanf("%c",&miEmpleado[i].sexo);
    printf("ingrese sueldo Bruto: ");
    scanf("%f",&miEmpleado[i].sueldoBruto);
    miEmpleado[i].suledoNeto=miEmpleado[i].sueldoBruto*0.85;


}
void mostrarTodosLosEmpleados(eEmpleado miEmpleado[],int tam)
{
    int i;
    for(i=0;i<tam;i++)
    {
        mostrarEmpleado(miEmpleado[i]);

    }

}
/*void pedirLegajo(char mensaje[], int legajo )
{
    printf("Ingrese %s",mensaje);
    scanf("%d",&legajo);*/

void mostarMenu(eEmpleado lista[],int tam)
{
     int opcion;
    int seguir = 's';

    do//con el do while repetis el menu de opciones
    {


        printf("1.Cargar Empleados\n2.Mostar Empleados\n3.Salir\n");
        scanf("%d",&opcion);//con el printf y el scanf tomas la opcion a elegir

        switch(opcion)// con el switch entras a la opciones
        {
            case 1:
                cargarEmpleado(lista,tam);


                break;
            case 2:
                mostrarTodosLosEmpleados(lista,tam);

            case 3:
                printf("Estas Saliendo del Sistema\n");
                seguir='n';
                break;
            default:
                printf("Error, Ingrese una Opcion valida\n");

        }
        system("pause");//prenas el menu
        system("cls");//aparece la opcion precionar una tecla para continuar


    }while (seguir=='s');//condicion a cumplir si queremos seguir dentro del meno


}
void inicializarEmpleados(eEmpleado lista[],int tam)
{
    int i;
    for(i=0;i<tam;i++)
    {
        lista[i].Estado=LIBRE;
    }
}
int buscarLibre(eEmpleado lista[],int tam)
{
   int i;
   int EspacioLibre;
   for(i=0;i<tam;i++)
   {
       if(lista[i].Estado==LIBRE)
       {
           EspacioLibre=i;
           break;
       }
       else
       {
           EspacioLibre=-1;
           lista[i].Estado=OCUPADO;
       }
   }
   return EspacioLibre;
}
