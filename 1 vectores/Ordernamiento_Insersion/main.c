#include <stdio.h>
#include <stdlib.h>

void ordenarInsercion(int* v, int cantElem);
void mostrarVector(int *v, int cantElem);

int main()
{
    printf("\t\t Metodo de insersion \n");

    int vec[] = {34, 13, 8, 21, 1, 2, 5, 3};

    printf("Vector antes de ordenar: \n");
    mostrarVector(&vec, 8);
    printf("Vector despues de ordenar: \n");
    ordenarInsercion(&vec, 8);
    mostrarVector(&vec, 8);


    return 0;
}

void ordenarInsercion(int* v, int cantElem)
{
    int j;
    int elemAIns; // elemento a insertar

    for(int i = 1; i < cantElem; i++)
    {
        elemAIns = v[i]; // contiene el elemento que arranca en la posicion 1
        j = i - 1; // j = 0

        while(j >= 0 && elemAIns < v[j]) // mientras j >= 0 && el elemento tiene que ser menor al elemento anterior
        {
            v[j+1] = v[j]; // en caso afirmativo, se le asigna el valor que estaba del lado derecho
            j--; // j = 0
        }

        //una vez terminado el while v[j+1] se queda con el valor del elemento a asignar

        v[j+1] = elemAIns;
    }

    // i aumenta una posicion y elemAlIns = v[2]
    //                               j    = 1
}

void mostrarVector(int *v, int cantElem)
{
    for(int i = 0 ; i < cantElem ; i++)
    {
        printf("%d \n", *v);
        v++;
    }
}
