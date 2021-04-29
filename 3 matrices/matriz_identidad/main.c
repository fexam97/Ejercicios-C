#include <stdio.h>
#include <stdlib.h>

#define FIL 4
#define COL 4

void mostrarMatrizIdentidad(int mat[][COL], int fil, int col);
int esMatrizIdentidad(int mat[][COL], int fil, int col);




int main()
{
    int mat[FIL][COL];

    mostrarMatrizIdentidad(mat, FIL, COL);

    int dato = esMatrizIdentidad(mat, FIL, COL);

    dato? printf("\n Es de identidad") : printf("\n No es de identidad");

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

int esMatrizIdentidad(int mat[][COL], int fil, int col)
{
    for(int i = 0; i < fil ; i++)
    {
        for(int j = 0; j < col ; j++)
        {
            if( i==j || mat[i][j]==0 )  // va a compilar pero no retorna nada
                return 0;
        }
    }

    return 1;
}
