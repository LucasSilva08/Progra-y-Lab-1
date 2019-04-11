#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "MayMin.h"
#include <ctype.h>

void pedirCadena(char [],char [],int);
void validarTamCadena(char [],char[],int);
int main()
{
    char nombre[20];
    char apellido[20];
    char apellidoNombre[41]="";//otra opcion



    pedirCadena("nombre: ",nombre,20);
    pedirCadena("apellido: ",apellido,20);

    //puts(nombre);
    //puts(apellido);
    //strcpy(apellidoNombre,apellido); una opcion

    strcat(apellidoNombre,apellido);
    strcat(apellidoNombre,", ");
    strcat(apellidoNombre,nombre);

    pasarMinuscula(apellidoNombre);//strlwr(apellidoNombre);
    int i=0;
    apellidoNombre[0]=toupper(apellidoNombre[0]);

    while (apellidoNombre[i]!= '\0')//por cada espacio combierto la en mayuscula la primera letra luego del espacio
    {
        if(apellidoNombre[i]==' ')
        {
            apellidoNombre[i+1]=toupper(apellidoNombre[i+1]);
        }

        i++;
    }

    puts(apellidoNombre);
    return 0;
}
void pedirCadena(char mensaje[],char cadena[],int tam)
{


    printf("Ingrese %s",mensaje);
    setbuf(stdin,NULL);//fflush(stdin);
    scanf("%[^\n]",cadena);
    validarTamCadena(mensaje,cadena,tam);



}
void validarTamCadena(char mensajeError[],char cadena[],int tam)
{


  while (strlen(cadena)>tam)
  {
      printf("Reingrese %s",mensajeError);
      setbuf(stdin,NULL);//fflush(stdin);
      scanf("%[^\n]",cadena);

  }

}
