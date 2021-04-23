#include "funciones.h"

int main()
{
    char cadena[501];
    int cantPalabra = 0;
    int cantEspacio = 0;

    puts("Ingrese una cadena de 500 caracteres: ");
    gets(cadena);

    cantEspacio = cantidadEspacios(&cadena);

    cantPalabra = cantidadPalabras(&cadena);

    printf("Cantidad de palabras:   %d", cantPalabra - cantEspacio);

    printf("\nCantidad de espacios:    %d", cantEspacio);

    return 0;
}

