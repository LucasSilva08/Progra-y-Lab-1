#include <stdio.h>
#include <stdlib.h>
#define T 5

/*int main()
{
    int* pNumero;
    int* pAuxiliar;
    int i;
     pNumero = (int*)malloc(sizeof(int)*T);
     if(pNumero!=NULL)
     {
         for(i=0;i<T;i++)
         {
             printf("Ingrese un Numero: ");
             scanf("%d",pNumero+i);
         }
         for(i=0;i<T;i++)
         {
             printf("%d\n",*(pNumero+i));
         }
     }
    pAuxiliar=(int*)realloc(pNumero,sizeof(int)*(T+5));
     if (pAuxiliar!=NULL)
     {
         pNumero=pAuxiliar;
         for(i=T;i<T+5;i++)
         {
             printf("Ingrese un Numero: ");
             scanf("%d",pNumero+i);
         }
         for(i=0;i<T+5;i++)
         {
             printf("%d\n",*(pNumero+i));
         }

     }


    return 0;
}*/
int main()
{
    int* pNumero;

    pNumero = (int*)malloc(sizeof(int)); //funcion malloc, casteado a un puntero tipo int
    *pNumero= 96;
    printf("HEAP--pNumero: %p\n",pNumero);//valor de pNumero, es la direccion de memoria del Heap reservado
    printf("STACK--pNumero: %p\n",&pNumero);//direccion de memoria del puntero
    if(pNumero!=NULL)
    {
        printf("VALOR--pNumero: %d\n",*pNumero);//valor del espacio reservado en el heap apuntado por el puntero
        //system("pause");
        printf("Luego de hacer el free\n");
        free(pNumero);//libera la referencia del espacio
        printf("HEAP--pNumero: %p\n",pNumero);
        printf("STACK--pNumero: %p\n",&pNumero);
        printf("VALOR--pNumero: %d\n",*pNumero);

    }

    return 0;
}
