#include <stdio.h>
#include "Operaciones.h"


float calcularSuma(float A,float B)
{
    float resultado;
    resultado= A+B;

    return resultado;
}

float calcularResta(float A, float B)
{

    float resultado;
    resultado=A-B;

    return resultado;
}

float calcularMultiplicacion(float A,float B)
{
    float resultado;
    resultado=A*B;

    return resultado;
}

float calcularDivision(float A,float B)
{
    float resultado;
    if (B!=0)
    {
        resultado = printf("El resultado de A/B es: %.2f\n",A/B);
    }
    else
    {
        resultado=printf("No se puede dividir por 0\n");
    }
    return resultado;
}
int calcularFactorail(float A)
{
    int resultado;
    if(A ==0|| A==1)
    {
        resultado = 1;
    }
    else
    {
        resultado=(int)A*calcularFactorail((int)A-1);
    }

    return resultado;
}


