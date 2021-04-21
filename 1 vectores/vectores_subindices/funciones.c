#include "funciones.h"

void agregar_elemento(int *vec, int ce)
{
    int pos;
    int num;

    puts("\n ingrese la posicion: ");
    scanf("%d", &pos);
    puts("\n ingrese un elemento: ");
    scanf("%d", &num);

    for(int i = 0; i < ce ; i++ )
        *(vec+pos) = num;

    printf("vector despues de insertar el elemento:\n ");
    mostrar_vector(vec, ce);
}

void mostrar_vector(int *vec, int ce)
{
    for(int i = 0; i < ce ; i++)
        printf("%d \n", *vec+i);
}
