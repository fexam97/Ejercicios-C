#include "main.h"

int main()
{
    char    destino[20],
            original[] = { "Hola, es la hora" },
            *aux;

    aux = strcpyR(destino, original);
    printf("La cadena original es:      \"%s\"\n"
           "la cadena destino queda con \"%s\"\n"
           "strycpy devolvio %p y la cadena destina esta en la direccion %p\n",
           original, destino, aux, destino);

    return 0;
}
