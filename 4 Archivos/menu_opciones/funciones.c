#include "funciones.h"

int menuOpciones(void)
{
    int numero;

    printf("1- Buscar el minimo elemento \n"
           "2- Calcular el promedio de los valores de las posiciones pares\n"
           "3- Mostrarlo en orden inverso\n"
           "4- Salir.\n ");
    do
    {
        scanf("%d", &numero);
    }
    while(numero < 1 || numero > 4);

    return numero;
}

int inicializarArray(float* vec, int cantElem)
{
    int elemIngresados = 0;
    int i = 1;

    printf("\n presione 0 para salir:\n\n   ");

    printf("Elemento en la posicion %d:    ", i);
    scanf("%f", (vec + i));

    if(*(vec + i) == 0)
        return elemIngresados;

    while(*(vec + i) != 0 && i < cantElem ) // muy de elementos esta operacion
    {
        i++;
        printf("Elemento en la posicion %d:    ", i);
        scanf("%f", (vec + i));
        elemIngresados++;

    }
    return elemIngresados + 1; // +1 por el ingreso arriba del while
}

float buscarMinimo(float* vec, int cantElem)
{
    float min = 0;

    for(int i = 0; i < cantElem ; i++)
    {
        //*(vec + i) > *(vec + i + 1)? ( min = *(vec + i) ):( *(vec + i + 1) = *(vec + i) );

        if(*(vec + i) < *(vec + i+1))
            min = *(vec + i);
        else
            *(vec + i + 1) = *(vec + i);
    }

    return min;
}

void ordenInverso(float* vec, int cantElem)
{
    printf("Array Inversa: \n");

    for(int i = 0 ; i < cantElem ; i++)
    {
        printf("%f \n", *(vec + i));
        *(vec) = *(vec) + 1;
    }
}

float buscarPromedio(float* vec, int cantElem)
{
    float sum;
    int cant = 0;

    for(int i = 0 ; i < cantElem ; i++)
    {
        if(*(vec + i)% 2 == 0)
        {
            sum = *(vec + i);
            cant++;
        }
    }

    return sum/(float)cant;
}
