#include "funciones.h"

int main()
{
    int vec[TAM_VEC];
    int *cantElem = 0; // se va a utilizar como puntero para modificarse

    srand(time(NULL)); // se usa para llenar el vector con numeros aleatorios

    for(int i = 1; i < TAM_VEC ; i++)
        insertarEnOrden(&vec, &cantElem, TAM_VEC, rand() % 100); // envio el vector, la cantidad de elementos, la capacidad del vector
                                                                 // y rand seria los elementos a ingresar en cada posicion del vector

    // como retorno uno, faltan 14 unos mas para terminar y ya tendremos el vector cargado y ordenado

    puts("vector ordenado generado por numeros aleatorios: ");

    mostrarVector(&vec, TAM_VEC); //esto es mas facil que la tabla de 5

    return 0;
}

