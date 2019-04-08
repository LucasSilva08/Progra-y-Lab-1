#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char nombre[15];
    char apellido[15];
    char Aux[30];

    printf("Ingrese su Nombre: ");
    scanf("%[^\n]",nombre);
    setbuf(stdin,NULL);
    printf("Ingrese su Apellido: ");
    scanf("%[^\n]",apellido);



    strcpy(Aux,apellido);
    strcat(Aux,", ");
    strcat(Aux,nombre);

    printf("%s",Aux);


    //printf("%s",nombre);


    return 0;
}
