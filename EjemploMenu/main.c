#include <stdio.h>
#include <stdlib.h>

int main()
{
     int opcion;
    int seguir = 's';

    do//con el do while repetis el menu de opciones
    {


        printf("1.Tomar datos\n2.Tomar mas datos\n3. Calcular todas las Operaciones \n4. Informar Resultado\n5. Salir\n");
        scanf("%d",&opcion);//con el printf y el scanf tomas la opcion a elegir

        switch(opcion)// con el switch entras a la opciones
        {
            case 1:

                printf("Estas en la opcion 1\n");
                break;
            case 2:
                printf("Estas en la opcion 2\n");
            case 3:
              printf("Estas en la Opcion 3\n");
                break;
            case 4:
                printf("Estas en la opcion 4\n");
                break;
            case 5:
                printf("Estas Saliendo del Sistema\n");
                seguir='n';
                break;
            default:
                printf("Error, Ingrese una Opcion valida\n");

        }
        system("pause");//prenas el menu
        system("cls");//aparece la opcion precionar una tecla para continuar


    }while (seguir=='s');//condicion a cumplir si queremos seguir dentro del meno

    return 0;
}
