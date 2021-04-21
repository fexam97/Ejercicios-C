#include <stdio.h>
#include <stdlib.h>
#define TAM 10

#include "funciones.h"

int main()
{
    int v[TAM]={0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    mostrar_vector(&v, TAM);
    agregar_elemento(&v, TAM);


    return 0;
}
