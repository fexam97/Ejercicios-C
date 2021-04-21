#include "funciones.h"


int insertarEnOrden(int* vec, int* ce, int cap, int elem)
{
    if(*ce == cap) // si lade la cantidad de elementos es igual a la capacidad devuelve cero ( y aca no pasó nada)
        return 0;  // pd: NUNCA VA A PASAR

    int posAct = (*ce) - 1; //declaro la posicion actual inicializandolo en la cantidad de elementos - 1

    while(posAct >= 0 && elem < *(vec + posAct)) //si la posicion actual es mayor o igual a cero
                                                // && el elemento random es menor que vec[posAct] ; si todo esto se cumple entonces entra
    {
        *(vec + (posAct + 1)) = *(vec + posAct);// como el elemento random era menor entonces se asignará el valor la posicion actual + 1
                                                // al valor de la posicion del vector actual

        posAct--;   //baja una posicion (imaginate, arranca desde 15)
    }
                                        // una vez que la condicion sea falsa, saldra del while

    *(vec + (posAct + 1)) = elem; // la primera posicion guardara el numero mas pequeño ; ADEMAS GRACIAS A ESTO SE ESTA CARGANDO EL VECTOR

    (*ce)++; // aumenta la cantidad de elementos

    return 1; // ese 1 va a parar en el ciclo for
}

int eliminarElemento(int* vec, int* ce)
{
    int band = 0; //
    int elem;
    scanf("%d", &elem);


    for(int i = 0; i < ce ; i++) // 21, 45, 63, 41, 10
    {
        if(*(vec + i) == elem) // vec[2] == 45
        {
            while( i < ce) // 2 < 5
            {
                *(vec + i) = *(vec + i + 1);     // v[2] = v[3]

                i++;                            // 3

            }
        }

        ce = ce - 1;
    }

    return 1;


}
void mostrarVector(int* vec, int ce)
{
    puts("");
    for(int i = 0 ; i < ce ; i++)
    {
        printf("%d\n", *vec);
        *vec++;
    }
}
