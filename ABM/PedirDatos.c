#include <stdio.h>
#include <stdlib.h>
#include <time.h>

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
char getNumeroAleatorio(int desde , int hasta, int iniciar)
{
    if(iniciar)
        srand (time(NULL));
    return desde + (rand() % (hasta + 1 - desde)) ;
}
