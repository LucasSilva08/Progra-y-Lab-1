#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero;
    int contador=0;
    int acumuladorTotal=0;
    int contadorPares=0;
    int sumaDePositivos=0;
    int contadorNegativos=0;
    int acumuladorNegativos=0;
    float PromedioNegativos;
    int maximo;
    int minimo;
    int flag=0;
    int positivoMinimo;
    int negativoMaximo;
    int flag1=0;
    int contadorDos=0;
    float promedioTotal;
    char respuesta='s';

    while(respuesta=='s')
    {
        printf("Ingrese Un Numero: ");
        scanf("%d",&numero);
        while(numero==0)
        {
            printf("Error. Ingrese un Numero Distinto a 0:");
            scanf("%d",&numero);
        }
        printf("Desea Continuar s/n: ");
        fflush(stdin);
        scanf("%c",&respuesta);
    }














   /* int numero1;
    int numero2;
    int suma;
    float promedio;

    printf("Ingrese un numero: ");
    scanf("%d",&numero1);
    printf("Ingrese otro numero: ");
    scanf("%d",&numero2);

    suma=numero1+numero2;

    promedio=(float)suma/2;

    printf("El promedio es: %.1f",promedio);*/
    return 0;
}
