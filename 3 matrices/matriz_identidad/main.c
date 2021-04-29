#include <stdio.h>
#include <stdlib.h>

#define FIL 4
#define COL 4

void mostrarMatrizIdentidad(int mat[][COL], int fil, int col);


/// creo que tenia que hacer una funcion que muestre en pantalla : " la matriz es de identidad "

int main()
{
    int mat[FIL][COL];

    mostrarMatrizIdentidad(mat, FIL, COL);

    return 0;
}

void mostrarMatrizIdentidad(int mat[][COL], int fil, int col)
{
    printf("\n Matriz de %d x %d :  \n\n", fil , col);

    for(int i = 0; i < fil ; i++)
    {
        for(int j = 0; j < col ; j++)
        {
            (i == j)? (mat[i][j] = 1) : (mat[i][j] = 0);
            printf("%d \t", mat[i][j]);
        }
        printf("\n");
    }

}
