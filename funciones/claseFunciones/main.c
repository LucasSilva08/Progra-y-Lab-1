#include <stdio.h>
#include <stdlib.h>

//recibe/devuelve
int sumarNumeros(int,int);//generamos prototipo de la funcion
int main()

{
    int numeroUno;
    int numeroDos;
    int resultado;

    printf("Ingrese Un Numero: ");
    scanf("%d",&numeroUno);

    printf("Ingrese otro Numero: ");
    scanf("%d",&numeroDos);

    resultado = sumarNumeros(numeroUno,numeroDos);//llamamos a la funcion sumar

    printf("El resultado es: %d",resultado);
    return 0;
}
int sumarNumeros(int unNumero,int otroNumero)//desarrollamos la funcion
{
    int resultado;
    resultado=unNumero+otroNumero;

    return resultado;
}
