#include "funciones.h"

int main()
{
    int mat[FIL][COL];

    srand(time(NULL)); // lo hice con numeros aleatorios

    mostrarMatriz(mat, FIL, COL);

    sumatoriaDiagonalPrincipal(mat, FIL, COL);

    sumatoriaDiagonalSecundaria(mat, FIL, COL);

    return 0;
}

