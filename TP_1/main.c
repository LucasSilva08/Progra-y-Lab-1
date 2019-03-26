#include <stdio.h>
#include <stdlib.h>
#include "Operaciones.h"

int main()
{
    int suma;
    int resta;
    int multiplicacion;
    float division;

    suma=calcularSuma(5,2);
    resta=calcularResta(5,2);
    multiplicacion=calcularMultiplicacion(5,2);
    division=(float)calcularDivision(5,2);

    printf("%d\n%d\n%d\n",suma,resta,multiplicacion);

    return 0;
}
