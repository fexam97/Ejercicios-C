#include <stdio.h>
#include <stdlib.h>

#define FIL 3
#define COL 3

void mostrarMatriz(int mat[][COL], int fil, int col);
void productoEntreMatrices(int mat[][COL], int mat2[][COL], int fil, int col);

int main()
{                                                                         // 0   -7   3         // 5    4   -3
    int matUno[FIL][COL] = { {0, -7, 3}, {2, 4, 1}, {12, 7, 6} };         // 2    4   1     *   // 0    6   10
    int matDos[FIL][COL] = { {5, 4, -3}, {0, 6, 10}, {-2, 8, 11} };       // 12   7   6         // -2   8   11

    mostrarMatriz(matUno, FIL, COL);
    mostrarMatriz(matDos, FIL, COL);

    productoEntreMatrices(matUno, matDos, FIL, COL);



    return 0;
}

void mostrarMatriz(int mat[][COL], int fil, int col)
{
    printf("\n\n");
    for(int i = 0 ; i < fil ; i++)
    {
        for(int j = 0; j < col ; j++)
            printf("%d \t", mat[i][j]);

        printf("\n");
    }

}

void productoEntreMatrices(int mat[][COL], int mat2[][COL], int fil, int col)
{
    int nuevaMatriz[FIL][COL] = {{0}};

    for(int i = 0; i < fil ; i++)
    {
        for(int j = 0; j < col ; j++)
        {
            nuevaMatriz[i][j] = (mat[i][0] * mat2[0][j]) + (mat[i][1] * mat2[1][j]) + (mat[i][2] * mat2[2][j]);

        }
    }

    mostrarMatriz(nuevaMatriz, FIL, COL);
}



// c11 : 0 * 5  +  (-7) * 0  +   3 * (-2)  =  -6


// mat[0][0] = 0   +  mat2[0][0] = 5
// mat[0][1] = -7  +  mat2[1][0] = 0
// mat[0][2] = 3   +  mat2[2][0] = -2
