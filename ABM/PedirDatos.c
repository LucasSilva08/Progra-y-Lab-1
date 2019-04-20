#include <stdio.h>

int pedirEntero(char mensaje[])
{
    int numero;
    printf("%s",mensaje);
    scanf("%d",&numero);
    return numero;
}
void pedirCadena(char mensaje[],char cadena[])
{
   printf("%s",mensaje);
   fflush(stdin);
   scanf("%[^\n]",cadena);
}
float pedirFlotante(char mensaje[])
{
    float numero;
    printf("%s",mensaje);
    scanf("%f",&numero);
    return numero;
}
char pedirCaracter(char mensaje[])
{
    char letra;
    printf("%s",mensaje);
    fflush(stdin);
    scanf("%c",&letra);
    return letra;
}
