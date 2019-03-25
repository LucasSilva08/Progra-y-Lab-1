#include <stdio.h>
#include <stdlib.h>
int pedirNota(void);
float sacarPromedio(int suma,int cantidad);
int aprobarMateria(int notaMinima, int nota);
void ejercicioUno(void);
int main()
{
    ejercicioUno();

    return 0;
}
int pedirNota()
{
    int nota;
    do
    {
        printf("Ingrese Nota: ");
        scanf("%d",&nota);

    }while(nota<0 ||nota>10);
    return nota;
}
float sacarPromedio(int suma,int cantidad)
{
    float promedio;
    promedio = (float)suma/cantidad;

    return promedio;
}
int aprobarMateria(int notaMinima,int nota)
{
    if (nota>=notaMinima)

        return 1;

    return 0;

}
void ejercicioUno(void)
{
    int nota;
    int notaMinima=6;
    int valorA;
    int contadorNotas;
    int cantidadAprobados=0;
    int cantidadNoAprobados=0;
    int acumuladorNotasAprobadas=0;
    int acumuladorNotasNoAprobadas=0;
    float promedioAprobados;
    float promedioNoAprobados;

    for (contadorNotas=0; contadorNotas<5;contadorNotas++)
    {
        nota = pedirNota();
        valorA=aprobarMateria(notaMinima,nota);
        if (valorA==1)
        {
            acumuladorNotasAprobadas=acumuladorNotasAprobadas+nota;
            cantidadAprobados++;
        }
        else
        {
            acumuladorNotasNoAprobadas=acumuladorNotasNoAprobadas+nota;
            cantidadNoAprobados++;
        }
    }

    promedioAprobados=sacarPromedio(acumuladorNotasAprobadas,cantidadAprobados);
    promedioNoAprobados=sacarPromedio(acumuladorNotasNoAprobadas,cantidadNoAprobados);

    printf("Cantidad De Aprobados: %d\nPromedio de notas Aprobadas: %f\nPromedios de notas No Aprobados %f",cantidadAprobados,promedioAprobados,promedioNoAprobados);

}
