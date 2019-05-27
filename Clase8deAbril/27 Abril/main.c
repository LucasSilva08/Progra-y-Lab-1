#include <stdio.h>
#include <stdlib.h>

/*int main()
{
    FILE* miArchivo;
    char nombre[20]="Lucas";
    miArchivo=fopen("D:\\misDatos.txt","w");//abro el archivo en modo escritura / si no pongo la direccion donde quiero crear el archivo y lo crea en la carpeta por defecto
    if(miArchivo!=NULL)
    {
        fprintf(miArchivo,"Su nombre es\n %s",nombre);//escribo el nombre
    }

    fclose(miArchivo);//cierro el archivo
    return 0;
}*/
int main ()
{
    FILE* miArchivo;
    char nombre[20];
    miArchivo=fopen("D:\\misDatos.txt","r");// abro el archivo en modo lectura
    while (!feof(miArchivo))
    {
        fgets(nombre,20,miArchivo);
        printf("%s",nombre);
    }
    /*fgets(nombre,30,miArchivo);// lee una linea del archivo
    fgets(nombre,30,miArchivo);//pisa la anterior y lee la segunda linea*/
    fclose(miArchivo);//cierro el archivo
    //printf("%s",nombre);
    return 0;
}
