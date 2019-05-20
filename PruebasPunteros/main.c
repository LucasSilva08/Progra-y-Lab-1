#include <stdio.h>
#include <stdlib.h>
typedef struct
{

   char tipo;
    int numero;
    double importe;

}eFactura;

int main()
{
    printf("%d",sizeof(eFactura));
    return 0;
}
