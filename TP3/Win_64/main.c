#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "LinkedList.h"
#include "Controller.h"
#include "Employee.h"
#include "utn.h"

/****************************************************
    Menu:
     1. Cargar los datos de los empleados desde el archivo data.csv (modo texto).
     2. Cargar los datos de los empleados desde el archivo data.csv (modo binario).
     3. Alta de empleado
     4. Modificar datos de empleado
     5. Baja de empleado
     6. Listar empleados
     7. Ordenar empleados
     8. Guardar los datos de los empleados en el archivo data.csv (modo texto).
     9. Guardar los datos de los empleados en el archivo data.csv (modo binario).
    10. Salir
*****************************************************/


int main()
{

    int option;
    LinkedList* listaEmpleados = ll_newLinkedList();
    do{
        printf("1. Cargar los datos de los empleados desde el archivo data.csv (modo texto)\n");
        printf("2. Cargar los datos de los empleados desde el archivo data.csv (modo binario)\n");
        printf("3. Alta de empleado\n");
        printf("4. Modificar datos de empleado\n");
        printf("5. Baja de empleado\n");
        printf("6. Listar empleados\n");
        printf("7. Ordenar empleados\n");
        printf("8. Guardar los datos de los empleados en el archivo data.csv (modo texto)\n");
        printf("9. Guardar los datos de los empleados en el archivo data.csv (modo binario)\n");
        printf("10. Salir\n");
        option=getInt("Ingrese una Opcion: ");


        switch(option)
        {
            case 1:
                if(controller_loadFromText("data.csv",listaEmpleados))
                    printf("\nCARAGA EXITOSA\n\n");
                break;
            case 2:
                printf("Estoy en el 2\n");
                break;
            case 3:
                controller_addEmployee(listaEmpleados);
                break;
            case 4:
                controller_editEmployee(listaEmpleados);
                break;
            case 5:
                controller_removeEmployee(listaEmpleados);
                break;
            case 6:
                controller_ListEmployee(listaEmpleados);
                break;
            case 7:

                ll_sort(listaEmpleados,employee_CompareById,1);
                break;
            case 8:
                printf("Estoy en el 8\n");
                break;
            case 9:
                printf("Estoy en el 9\n");
                break;

        }
    }while(option != 10);

    return 0;
}
