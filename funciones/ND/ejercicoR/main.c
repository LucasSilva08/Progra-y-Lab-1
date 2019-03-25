#include <stdio.h>
#include <stdlib.h>
void sumarNumeros(int,int);
int main()
{
    int numeroUno;
    int numeroDos;

    printf("ingrese un numero: ");
    scanf("%d",&numeroUno);
    printf("ingrese otro numero: ");
    scanf("%d",&numeroDos);

    sumarNumeros(numeroUno,numeroDos);

    return 0;
}
void sumarNumeros(int unNumero, int otroNumero)
{
    int resultado;
    resultado=unNumero+otroNumero;
    printf("la suma es: %d",resultado);

}

