#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define FIL 4
#define COL 4

void mostrarMatrizConSoloElementosEnLaDiagonal(int mat[][COL], int fil, int col);

int main()
{
    int mat[FIL][COL];

    srand(time(NULL));

    mostrarMatrizConSoloElementosEnLaDiagonal(mat, FIL, COL);

    return 0;
}

void mostrarMatrizConSoloElementosEnLaDiagonal(int mat[][COL], int fil, int col)
{
    printf("\n Matriz de %d x %d :  \n\n", fil , col);

    for(int i = 0; i < fil ; i++)
    {
        for(int j = 0; j < col ; j++)
        {
            (i == j)? (mat[i][j] = rand()%60) : (mat[i][j] = 0);
            printf("%d \t", mat[i][j]);
        }
        printf("\n");
    }

}
