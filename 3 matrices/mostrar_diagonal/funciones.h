#ifndef FUNCIONES_H
#define FUNCIONES_H

#include <stdio.h>
#include <stdlib.h>

#define FIL 4
#define COL 4

void cargarMatriz(int mat[][COL], int fil, int col);
void mostrarMatriz(int mat[][COL], int fil, int col);
void mostrarDiagonalPri(int mat[][COL], int fil, int col);
void mostrarElemDiagonalPri(int mat[][COL], int fil, int col);
void sumatoriaDiagPrincipal(int mat[][COL], int fil, int col);
void mostrarDiagonalSec(int mat[][COL], int fil,int col);
void mostrarElemDiagonalSec(int mat[][COL], int fil,int col);
void sumatoriaDiagSecundaria(int mat[][COL], int fil,int col);


#endif // FUNCIONES_H
