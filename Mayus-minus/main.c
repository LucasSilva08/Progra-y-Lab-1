#include <stdio.h>
#include <stdlib.h>
#include "MayMin.h"
#include <string.h>

int main()
{
    char cadena[20];

    printf("Ingrese Nombre: ");
    setbuf(stdin,NULL);
    scanf("%[^\n]",cadena);

    pasarMayuscula(cadena);

    puts(cadena);

    pasarMinuscula(cadena);
    puts(cadena);


    return 0;
}
