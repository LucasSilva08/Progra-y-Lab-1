#include <stdio.h>
#include <stdlib.h>

int main()
{
    int* pNumero;
    int i;
     pNumero = (int*)malloc(sizeof(int)*5);
     if(pNumero!=NULL)
     {
         for(i=0;i<5;i++)
         {
             printf("Ingrese un Numero: ");
             scanf("%d",pNumero+i);
         }
         for(i=0;i<5;i++)
         {
             printf("%d\n",*(pNumero+i));
         }
     }

    return 0;
}
/*int main()
{
    int* pNumero;

    pNumero = (int*)malloc(sizeof(int)); //funcion malloc, casteado a un puntero tipo int
    *pNumero= 96;
    printf("HEAP--pNumero: %p\n",pNumero);//valor de pNumero, es la direccion de memoria del Heap reservado
    printf("STACK--pNumero: %p\n",&pNumero);//direccion de memoria del puntero
    if(pNumero!=NULL)
    {
        printf("VALOR--pNumero: %d\n",*pNumero);//valor del espacio reservado en el heap apuntado por el puntero
        system("pause");
        printf("Luego de hacer el free\n");
        free(pNumero);//libera la referencia del espacio
        printf("HEAP--pNumero: %p\n",pNumero);
        printf("STACK--pNumero: %p\n",&pNumero);
        printf("VALOR--pNumero: %d\n",*pNumero);

    }

    return 0;
}*/
