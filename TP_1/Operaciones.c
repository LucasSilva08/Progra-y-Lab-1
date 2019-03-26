#include "Operaciones.h"


int calcularSuma(int A, int B)
{
    int resultado;
    resultado= A+B;

    return resultado;
}

int calcularResta(int A, int B)
{

    int resultado;
    resultado=A-B;

    return resultado;
}

int calcularMultiplicacion(int A,int B)
{
    int resultado;
    resultado=A*B;

    return resultado;
}

float calcularDivision(int A,int B)
{
    int resultado;
    if (B!=0)
    {
        resultado = (float)A/B;
    }
    else
    {
        resultado=printf("No se puede dividir por 0");
    }
    return resultado;
}
