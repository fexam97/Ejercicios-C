#include "funciones.h"

int main()
{
    int mat[FIL][COL];

    cargarMatriz(mat, FIL, COL);

    mostrarMatriz(mat, FIL, COL);

    mostrarDiagonalPri(mat, FIL, COL);

    mostrarElemDiagonalPri(mat, FIL, COL);

    sumatoriaDiagPrincipal(mat, FIL, COL);

    mostrarDiagonalSec(mat, FIL, COL);

    mostrarElemDiagonalSec(mat, FIL, COL);

    sumatoriaDiagSecundaria(mat, FIL, COL);

    return 0;
}



