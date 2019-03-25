#include <stdio.h>
#include <stdlib.h>
int sumarNumeros(void);
int main()
{
    int resultado;
    resultado=sumarNumeros();
    printf("La suma es: %d",resultado);

    return 0;
}
int sumarNumeros()
{
    int numeroUno;
    int numeroDos;
    int resultado;

    printf("Ingrese Un Numero: ");
    scanf("%d",&numeroUno);

    printf("Ingrese otro Numero: ");
    scanf("%d",&numeroDos);

    resultado = numeroUno+numeroDos;



    return resultado;

}
