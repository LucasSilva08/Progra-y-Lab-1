#include <stdio.h>
#include <stdlib.h>

    typedef struct //en el campus aparece asi solo con struct
{
    int legajo;
    char nombre[20];
    char sexo;
    float sueldoBruto;
    float suledoNeto;
}eEmpleado;

int main()
{


    eEmpleado unEmpleado;//va la esctructura y le asigno un nombre
    eEmpleado otroEmpleado;
    printf("Ingrese Legajo: ");
    scanf("%d",&unEmpleado.legajo);
    printf("Ingrese Nombre: ");
    fflush(stdin);
    scanf("%[^\n]",unEmpleado.nombre);
    printf("Ingrese Sexo M o F: ");
    scanf("%c",&unEmpleado.sexo);
    printf("ingrese sueldo Bruto: ");
    scanf("%f",&unEmpleado.sueldoBruto);
    unEmpleado.suledoNeto=unEmpleado.sueldoBruto*0.85;
    otroEmpleado=unEmpleado;//copia los valores de la esctuctura en la otra es decir se genera una copia en memoria
    unEmpleado.legajo=7000; // se modifica el valor de un campo de la estuctura pero no cambia la copia;



    puts(unEmpleado.nombre);//con el . visualizo los campos de la esctructura
    puts(otroEmpleado.nombre);
    return 0;
}
