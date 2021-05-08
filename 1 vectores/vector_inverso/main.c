#include <stdio.h>
#include <stdlib.h>

#define TAM_VEC 10

void mostrarVectorSubIndices(const int vec[], int cantElem);
void mostrarVectorSubIndicesInversa(const int vec[], int cantElem);
void mostrarVectorPunteros(int* vec, int cantElem);
void mostrarVectorPunterosInversa(int* vec, int cantElem);

/************************* TIENE 4 WARNINGS ********************************/

int main()
{
    int vec[TAM_VEC] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    mostrarVectorSubIndices(vec, TAM_VEC);
    mostrarVectorSubIndicesInversa(vec, TAM_VEC);

    int vec_1[TAM_VEC] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    mostrarVectorPunteros(&vec_1, TAM_VEC);
    mostrarVectorPunterosInversa(&vec_1, TAM_VEC);

    return 0;
}

void mostrarVectorSubIndices(const int vec[], int cantElem)
{
    printf("Vector Normal con subindices: \n");

    for(int i = 0; i < cantElem ; i++)
        printf("%d \t", vec[i]);

    printf("\n\n\n");
}


void mostrarVectorSubIndicesInversa(const int vec[], int cantElem)
{
    printf("Vector Normal con subindices inversa: \n");

    for(int i = cantElem - 1 ; i >= 0 ; i--)
        printf("%d \t", vec[i]);

    printf("\n\n\n");
}



void mostrarVectorPunteros(int* vec, int cantElem)
{
    printf("Vector Normal con Punteros: \n");

    for(int i = 0; i < cantElem ; i++)
        printf("%d \t", *(vec+i));
        vec++;

    printf("\n\n\n");
}



void mostrarVectorPunterosInversa(int* vec, int cantElem)
{
    printf("Vector Normal con Punteros inversa: \n");
    int i;

    for(i = cantElem - 1; i >= 0 ; i--)
        printf("%d \t", *(vec+i));
        vec++;

    printf("\n\n");
}
