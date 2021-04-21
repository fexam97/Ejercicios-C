#include "funciones.h"

int main()
{
    const int vec[TAM_VEC];
    int *cantElem = 0;

    srand(time(NULL));

    for(int i = 1; i < TAM_VEC ; i++)
        insertarEnOrden(&vec, &cantElem, TAM_VEC, rand() % 100);

    mostrarVector(&vec, TAM_VEC );

    printf("que elemento te molesta mas ? \n\n Lo vamos a eliminar: ");

    int band; // bandera xD, como en elementos

    if(band)
        band = eliminarElemento(&vec, TAM_VEC);
    else
        printf("\n no se encontro el elemento ");

    mostrarVector(&vec, TAM_VEC - 1);

    return 0;
}

