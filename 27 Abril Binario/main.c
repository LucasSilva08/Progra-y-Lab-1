#include <stdio.h>
#include <stdlib.h>
typedef struct
{
    int legajo;
    char nombre[20];
    float sueldo;

}eEmpleado;
/*int main()
{
    FILE* miArchivo;
    int* x=(int*)malloc(sizeof(int));
    *x=4;
    miArchivo=fopen("Datos","wb");
    fwrite(x,sizeof(int),1,miArchivo);
    fclose(miArchivo);
    return 0;
}*/
int main()
{
    FILE* miArchivo;
    int* x;
    x=(int*)malloc(sizeof(int));
    miArchivo=fopen("Datos","rb");
    fread(x,sizeof(int),1,miArchivo);
    fclose(miArchivo);
    printf("%d",*x);
    return 0;
}
