#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define TAM_VEC 6

void mostrarVector(int *vec , int cantElem);
bool elementoEncontrado(int *vec, int cantElem);

/****************** TENGO QUE TRANSFORMAR TODO ESTO EN ESTRUCTURA Y GUARDARLO EN ARREGLO.DAT ***************************/

int main()
{
    int vec[TAM_VEC] = {50, 6, 40, 31, 22, 91};

    mostrarVector(&vec, TAM_VEC);

    bool elemento = elementoEncontrado(&vec, TAM_VEC);

    if(elemento)
        printf("Elemento encontrado \n");
    else
        printf("Elemento NO encontrado, en otras palabras NULL \n");

    return 0;
}


void mostrarVector(int *vec , int cantElem)
{
    printf("array generado: \n");

    for(int i = 0; i < cantElem ; i++)
    {
        printf("%d \t", *vec);
        vec++;
    }

}

bool elementoEncontrado(int *vec, int cantElem)
{
    int dato;

    printf("\n Ingrese elemento a encontrar: ");
    scanf("%d", &dato);

    for(int i = 0 ;  i < cantElem ; i++)
    {
        if( *(vec+i) == dato)
            return true;
    }

    return false;
}
