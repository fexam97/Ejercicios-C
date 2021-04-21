#include "funciones.h"

int posicion(unsigned int hasta)
{
    printf("\n\n Ingrese la posicion: ");
    int pos;
    do
    {
        scanf("%d", &pos);
    }
    while( (pos < 1) || (pos > hasta) );

    return pos - 1; // lo hago asi porque el vector arranca contando de cero
}

void insertarElemento(int* vec, int ce, int pos)
{
    int elem;
    printf("\n\n Ingrese el elemento a insertar:");
    scanf("%d", &elem);

    for(int i = 0; i <= ce ; i++)
    {
        if(pos == i)
            *(vec + pos) = elem;
    }
}

void mostrarVector(int* vec, int ce)
{
    puts("");
    for(int i = 0; i <= ce ; i++)
    {
        printf("%d \t", *vec);
        vec++;
    }
}
