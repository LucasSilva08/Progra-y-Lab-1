#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define T 3
void pedirCadena(char[],char[],int);
void validarTamCadena(char[],char[],int);
int main()
{
   /* char nombre[20];
    char apellido[20];
    char apellidoNombre[41]="";//otra opcion



    pedirCadena("nombre: ",nombre,20);
    pedirCadena("apellido: ",apellido,20);

    puts(nombre);
    puts(apellido);
    //strcpy(apellidoNombre,apellido); una opcion

    strcat(apellidoNombre,apellido);
    strcat(apellidoNombre,", ");
    strcat(apellidoNombre,nombre);

    strlwr(apellidoNombre);
 int i=0;
    //apellidoNombre[0]=toupper(apellidoNombre[0]);
printf("i:%d",i);
    while (apellidoNombre[i]!= '\0')//por cada espacio combierto la en mayuscula la primera letra luego del espacio
    {
        if(apellidoNombre[i]==' ')
        {
            apellidoNombre[i+1]=toupper(apellidoNombre[i+1]);
        }

        i++;
    }

    puts(apellidoNombre);*/
    int legajos[T];
    float sueldo[T];
    char sexo[T];
    char nombres[T][20];
    int i;

    for(i=0;i<T;i++)
    {
        printf("ingrese legajo: ");
        scanf("%d",&legajos[i]);
        printf("Ingrese Sueldo: ");
        scanf("%f",&sueldo[i]);
        printf("ingrese sexo m o f: ");
        fflush(stdin);
        scanf("%c",&sexo[i]);
        pedirCadena("nombre: ",nombres[i],20);
    }

    for(i=0;i<T;i++)
    {
        printf("%d-%s-%f-%c\n",legajos[i],nombres[i],sueldo[i],sexo[i]);
    }




    return 0;
}
void pedirCadena(char mensaje[],char cadena[],int tam)
{
    printf("Ingrese %s",mensaje);
    fflush(stdin);
    scanf("%[^\n]",cadena);
    //validarTamCadena(mensaje,cadena,tam);
}
void validarTamCadena(char mensajeError[],char cadena[],int tam)
{
 /* while (strlen(cadena)>tam)
  {
      printf("Reingrese %s",mensajeError);
      fflush(stdin);
      scanf("%[^\n]",cadena);

  }*/
}
