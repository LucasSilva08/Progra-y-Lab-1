#include <stdio.h>
#include <stdlib.h>

int main()
{
    int* q;
    int* r;
    int p;
    p=10;
    q=&p;// copio la dirrecion de memoria de p a q
    r=q;//copia el valor que posee q (posicion de memoria de p) a r
    printf("%p\n",q);// direccion de memoria que posee q
    printf("%p\n",r);// direccion de memoria que posee r (es la misma que posee q)
    printf("%d\n",*q);// el valor de la direccion de memoria a la que apunta q
    printf("%d\n",*r);// el valor de la diceccion de memoria a la que apunta r (es la misma que q)
    /*char* pCaracter=NULL;
    char caracter;
    pCaracter=&caracter;
    printf("Ingrese un caracter: ");
    fflush(stdin);
    scanf("%c",pCaracter);
    printf("%c",*pCaracter);*/


    /*int* x=NULL;
    int v=10;
    x=&v;
    printf("%d\n",v);//valor de v
    printf("%p\n",&v);// direccion de memoria de v
    printf("%p\n",&x);// direccion de memoria de x
    printf("%p\n",x);//valor de x (posee la direccion de memoria de v)
    printf("%d",*x);// valor al que apunta x*/
    return 0;
}
