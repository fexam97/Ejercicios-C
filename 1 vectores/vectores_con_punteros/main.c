#include <stdio.h>
#include <stdlib.h>

void imprimirVector(int* vec, int ce);
void cargarVector(int* p, int ce);

int main()
{
    int vec[10];
    int ce = 5;

    cargarVector(vec, ce);
    imprimirVector(vec, ce);

    return 0;
}

void cargarVector(int* pv, int ce)
{
    printf("Cargar %d datos: ", ce);
    for(int i = 0 ; i < ce ; i++)
    {
        scanf("%d", pv);
        pv++;
    }
}

void imprimirVector(int* vec, int ce)
{
    for(int i = 0 ; i < ce ; i++)
    {
        printf("\n %d", *vec);
        vec++;
    }
}
