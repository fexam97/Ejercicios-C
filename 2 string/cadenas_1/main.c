#include <stdio.h>
#include <stdlib.h>

void imprimirCadena(char *cad);


int main()
{
    char cadena[] = { " Dear Mario Please Come To Castle" };
    char cadena2[] = { "I've Baked A Cake For You" };

    imprimirCadena(cadena);
    puts("");
    imprimirCadena(cadena2);

    printf("\n \n \n");

    return 0;
}

void imprimirCadena(char *cad)
{

    if(!(*cad)) // si la condicion es verdadera entonces se terminó
        return;
    else
    {
        printf("%c", *cad); // imprime un caracter

        imprimirCadena( cad + 1); // llama a la funcion con una posicion mas
    }
}

