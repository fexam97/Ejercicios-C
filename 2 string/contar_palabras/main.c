#include <stdio.h>
#include <stdlib.h>

/*
    Hacer una funcion que devuelva la cantidad de palabras
    (separados por uno o mas espacios) que tiene una frase
*/

int cantidadEspacios(char* fra);
int cantidadPalabras(char* fra);

int main()
{
    int espacios = 0; //entero donde voy a guardad la cantidad de espacios
    int palabras = 0; //entero donde voy a guardad la cantidad de palabras
    char frase[] = "Deja de crear mas  aldeanos.";

    printf("Frase:  '%s'\n", frase);

    espacios = cantidadEspacios(frase);

    printf("La cantidad de espacios es: %d\n", espacios);

    palabras = cantidadPalabras(frase);

    printf("La cantidad de palabras es: %d\n    ", palabras - espacios);


    return 0;
}

int cantidadEspacios(char* fra)
{
    int num = 0; // contador
    char cActual; // caracter actual
    char cPrevio = ' '; // caracter previo

    while(*fra != '\0') // mientras no lo encuentre sigo dando vueletas
    {
        cActual = *fra; // cada paso que doy me guardo el caracter que esta en esa posicion de memoria

       if(cActual == ' ' && cPrevio != ' ')
       {
           num++;
       }

        cPrevio = cActual;
        fra++; // avanzo una posicion de memoria
    }

    if(cActual != ' ')
    {
        num++;
    }

    return num;
}

int cantidadPalabras(char* fra)
{
    int cantPalabra = 0;
    char cActual;

    while(*fra != '\0')
    {
        cActual = *fra;

        //printf("Caracter: %c\n", cActual);

        cantPalabra++;
        fra++;
    }
    return cantPalabra;
}

