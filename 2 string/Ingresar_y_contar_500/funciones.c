#include "funciones.h"

int cantidadPalabras(char* cad)
{
    int cantPalabra = 0;
    char cActual;

    while(*cad != '\0')
    {
        cActual = *cad;
        cantPalabra++;
        *cad++;
    }

    return cantPalabra;
}

int cantidadEspacios(char* cad)
{
    int cantEspacios = 0;
    char cActual;
    char cPrevio = ' ';

    while(*cad != '\0')
    {
        cActual = *cad;

        if(cActual == ' ' && cPrevio != ' ')
        {
            cantEspacios++;
        }

        cPrevio = cActual;
        *cad++;
    }

    if(*cad != ' ')
        cantEspacios++;

    return cantEspacios;
}
