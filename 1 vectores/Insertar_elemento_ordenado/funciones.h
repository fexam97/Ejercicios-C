#ifndef FUNCIONES_H
#define FUNCIONES_H

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

#define TAM_VEC 15

//void ordenarAlInsertar(int* vec, int ce);
int insertarEnOrden(int* vec, int* ce, int cap, int elem);
void mostrarVector(int* vec, int ce);

#endif // FUNCIONES_H
