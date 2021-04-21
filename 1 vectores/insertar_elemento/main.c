#include "funciones.h"

int main()
{
    int vec[] = {90, 53, 64, 42, 13, 22, 45, 6, 24, 21};

    mostrarVector(&vec, TAM_VEC);

    int pos = posicion(TAM_VEC + 1);

    insertarElemento(&vec, TAM_VEC, pos);

    mostrarVector(&vec, TAM_VEC);

    //printf("\n posicion ingresada: %d", pos);

    return 0;
}


