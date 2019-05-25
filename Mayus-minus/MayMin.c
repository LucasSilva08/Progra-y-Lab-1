#include <stdio.h>
#include <stdlib.h>
#include "MayMin.h"
#include <string.h>
#include <ctype.h>

void pasarMayuscula(char* cadena )
{
    int i=0;
    do
    {
        if (*(cadena+i)!=' ')
        {
            *(cadena+i)=toupper(*(cadena+i));

        }

      i++;
    }while (*(cadena+i)!='\0');
}
void pasarMinuscula(char* cadena)
{
    int i=0;
    do
    {
        if (*(cadena+i)!=' ')
        {
            *(cadena+i)=tolower(*(cadena+i));

        }
      i++;

    }while (*(cadena+i)!='\0');
}
