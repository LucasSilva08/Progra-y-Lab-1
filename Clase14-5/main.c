#include <stdio.h>
#include <stdlib.h>
void cargarCaracter(int*);
int main()
{
    /*int* q;
    int* r;
    int p;
    p=10;
    q=&p;// copio la dirrecion de memoria de p a q
    r=q;//copia el valor que posee q (posicion de memoria de p) a r
    printf("%p\n",q);// direccion de memoria que posee q
    printf("%p\n",r);// direccion de memoria que posee r (es la misma que posee q)
    printf("%d\n",*q);// el valor de la direccion de memoria a la que apunta q
    printf("%d\n",*r);// el valor de la diceccion de memoria a la que apunta r (es la misma que q)*/

    int numero;
    //pCaracter=&caracter;
    cargarCaracter(&numero);
    printf("%d",numero);


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
void cargarCaracter(int* pNumero)
{
    printf("Ingrese un caracter: ");

    scanf("%d",pNumero);
}
