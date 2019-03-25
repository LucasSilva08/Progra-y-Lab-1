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
    float promedioNegativos;
    int maximo;
    int minimo;
    int flag=0;
    int positivoMinimo;
    int negativoMaximo;
    int flagPositivos=0;
    int flagNegativo=0;
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

        acumuladorTotal=acumuladorTotal+numero;
        contador++;

        if (numero%2==0)
        {
            contadorPares++;
        }
        if (numero>0)
        {
            sumaDePositivos=sumaDePositivos+numero;
            if(flagPositivos==0||numero<positivoMinimo)
            {
                positivoMinimo=numero;
                flagPositivos=1;
            }

        }
        else
        {
            acumuladorNegativos=acumuladorNegativos+numero;
            contadorNegativos++;
            if(flagNegativo==0||numero>negativoMaximo)
            {
                negativoMaximo=numero;
                flagNegativo=1;
            }
        }

        if(flag==0||numero>maximo)
        {
            maximo=numero;
        }
        if(flag==0||numero<minimo)
        {
            minimo=numero;
            flag=1;
        }
        if (numero>=-10&&numero<=50)
        {
            contadorDos++;
        }


        printf("Desea Continuar s/n: ");
        setbuf(stdin,NULL);
        scanf("%c",&respuesta);

    }

    promedioTotal=(float)acumuladorTotal/contador;

    printf("La cantidad de Numeros ingresados es: %d\nLa cantidad de Pares es: %d\nLa Suma de los Positivos es: %d\n",contador,contadorPares,sumaDePositivos);

    if(contadorNegativos!=0)
    {
        promedioNegativos=(float)acumuladorNegativos/contadorNegativos;
        printf("El promedio de los Negativos es: %.2f\n",promedioNegativos);

    }
    else
    {
        printf("No se Ingresaron Negativos\n");
        negativoMaximo=0;
    }

    printf("El maximo es: %d\nEl minimo es: %d\nEl menor Positivo: %d\nEl maximo Negativo: %d\n",maximo,minimo,positivoMinimo,negativoMaximo);
    printf("Cantidad de Numeros entre -10 y 50: %d\nEl promedio Total: %.2f\n",contadorDos,promedioTotal);










    return 0;




    /*int numero1;
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

}
