#ifndef FUNCIONES_H
#define FUNCIONES_H

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// matriz cuadrada

#define FIL 4
#define COL 4

void mostrarMatriz(int mat[][COL], int fil, int col);
void sumatoriaDiagonalPrincipal(int mat[][COL], int fil, int col);
void sumatoriaDiagonalSecundaria(int mat[][COL], int fil, int col);

#endif // FUNCIONES_H
