#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct
{
    int numero;
    char letra;
}eDato;
int cargarDatos(eDato*,int);
int mostrarDatos (eDato*,int);
int ordenarPorLetras(eDato*,int);
int main()
{   int r;
    //eDato muchosDatos[3] = {{1,'c'},{3,'a'},{2,'z'}};
    eDato muchosDatos[3];
    cargarDatos(muchosDatos,3);

    r=ordenarPorLetras(muchosDatos,3);
    if(!r)
    {
        mostrarDatos(muchosDatos,3);
    }
    return 0;
}
int cargarDatos(eDato* pDato,int largo)
{
    int retorno=-1;
    int i;
    if (pDato!=NULL)
    {
        for(i=0;i<largo;i++)
       {
        printf("Ingrese un Numero: ");
        scanf("%d",&(pDato+i)->numero);
        printf("Ingrese un Caracter: ");
        fflush(stdin);
        scanf("%c",&(pDato+i)->letra);
        retorno=0;
       }
    }
    return retorno;
}
int mostrarDatos (eDato* pDato,int largo)
{
    int retorno=-1;
    int i;
    if (pDato!=NULL)
    {
        for (i=0;i<largo;i++)
        {
        printf("%d--%c\n",(pDato+i)->numero,(pDato+i)->letra);
        retorno=0;
        }
    }

    return retorno;
}
int ordenarPorLetras(eDato* pDatos,int largo)
{
    int retorno=-1;
    eDato AuxiliarDato;
    int i,j;
    if(pDatos!=NULL)
    {
        for(i=0;i<largo-1;i++)
        {
            for(j=i+1;j<largo;j++)
            {
                if((pDatos+i)->letra > (pDatos+j)->letra)
                {
                    AuxiliarDato = *(pDatos+i);
                    *(pDatos+i) = *(pDatos+j);
                    *(pDatos+j) = AuxiliarDato;
                    retorno=0;
                }
            }
        }
    }

    return retorno;
}
