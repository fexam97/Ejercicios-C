#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define FIL 4
#define COL 4

void mostrarMatriz(int mat[][COL], int fil, int col);
bool esMatrizIdentidad(int mat[][COL], int fil, int col);




int main()
{
    int mat[FIL][COL]={{1, 0, 0, 0},{0, 1, 0, 0},{0, 0, 1, 0}, {0, 0, 0, 1}};

    mostrarMatriz(mat, FIL, COL);

    esMatrizIdentidad(mat, FIL, COL)? printf("\n Es de identidad") : printf("\n No es de identidad");

    return 0;
}

void mostrarMatriz(int mat[][COL], int fil, int col)
{
    (fil==col)? printf("\n es matriz cuadrada \n") : printf("\n No es una matriz cuadrada \n");

    printf("\n Matriz de %d x %d :  \n\n", fil , col);

    for(int i = 0; i < fil ; i++)
    {
        for(int j = 0; j < col ; j++)
        {
            //(i == j)? (mat[i][j] = 1) : (mat[i][j] = 0);
            printf("%d \t", mat[i][j]);
        }
        printf("\n");
    }

}

bool esMatrizIdentidad(int mat[][COL], int fil, int col)
{
    for(int i = 0; i < fil ; i++)
    {
        for(int j = 0; j < col ; j++)
        {
            if( i==j || mat[i][j]==0 )  // hasta llegue pero no va a compilar
                return 0;
        }
    }

    return 1;
}
