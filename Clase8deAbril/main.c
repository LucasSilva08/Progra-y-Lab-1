#include <stdio.h>
#include <stdlib.h>
#include "Funciones.h"

int main()
{
    int valores[10]={10,8,9,7,4,3,1,5,6,2};
    OrdenarVector(valores,10);
    MostrarVector(valores,10);

    return 0;
}
