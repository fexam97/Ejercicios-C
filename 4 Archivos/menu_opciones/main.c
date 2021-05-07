#include "funciones.h"

int main()
{
   // int opcionValida = menuOpciones();

    int cantElem;

    printf("Ingrese la cantidad de elementos maximo a ingresar:     ");
    scanf("%d", &cantElem);

    float vec[cantElem];

    int cantElemIngresados = inicializarArray(&vec, cantElem);

    printf("\nCantidad de Elementos ingresados: %d \n\n", cantElemIngresados);

    float minimo = buscarMinimo(&vec, cantElemIngresados);

    printf("\nMinimo elemento: %2.f \n\n", minimo);

    ordenInverso(&vec, cantElemIngresados);

    float promedio = buscarPromedio(&vec, cantElemIngresados);

    printf("Promedio : %f \n", promedio);


    return 0;
}




/*

Escriba una función que permita desplegar un menú de opciones, devolviendo una opción válida. LISTO

Escriba una función que reciba por argumento la dirección de comienzo de un
array de float y la cantidad máxima de elementos a ingresar (no utilice subíndices).

La función permitirá terminar el ingreso con una condición fijada por el alumno
y devolverá la cantidad de elementos ingresados (puede ser cero).                              LISTO

Escriba una función que permita buscar el mínimo elemento de un array de float.  CASI

Escriba una función que determine el promedio de los elementos que se encuentran en las posiciones pares de un array de float. CASI

Escriba una función que muestre los elementos de un array de float en orden inverso CASI

Escriba una función que almacene en un archivo de texto los elementos de un
array de float, a razón de un flotante por línea de texto.

Haciendo uso de las funciones anteriores, escriba un programa que al comenzar
su ejecución permita el ingreso para un array de float, luego de lo cual muestre un menú de opciones para:

1- Buscar el mínimo elemento,
2- Calcular el promedio de los valores de las posiciones pares,
3- Mostrarlo en orden inverso,
4- Salir.

y que antes de terminar la ejecución del programa grabe los elementos del array en un archivo de texto.

Consulte de qué modo puede hacer que el programa trabaje con otros tipos de
datos (double, long double, int, unsigned, etc.), con mínimas modificaciones.


*/
