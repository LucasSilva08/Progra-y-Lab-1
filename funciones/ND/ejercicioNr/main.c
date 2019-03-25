#include <stdio.h>
#include <stdlib.h>
void sumarNumeros(void);
int main()
{
    sumarNumeros();
    return 0;
}
void sumarNumeros()
{


    int numeroUno;
    int numeroDos;
    int resultado;

    printf("Ingrese Un Numero: ");
    scanf("%d",&numeroUno);

    printf("Ingrese otro Numero: ");
    scanf("%d",&numeroDos);

    resultado = numeroUno+numeroDos;
    printf("La suma es: %d",resultado);

}
