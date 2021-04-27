#include "funciones.h"

void mostrarMatriz(int mat[][COL], int fil, int col)
{
    for(int i = 0; i < fil ; i++)
    {
        for( int j = 0 ; j < col ; j++)
        {
            mat[i][j] = rand()%60;
        }
    }

    for(int i = 0; i < fil ; i++)
    {
        for( int j = 0 ; j < col ; j++)
        {
            printf("%d \t", mat[i][j]);
        }
        printf("\n");
    }
}


void sumatoriaDiagonalPrincipal(int mat[][COL], int fil, int col)
{
    int sumatoria = 0;

    printf("\n\n Diagonal principal :\n");

    for(int i = 0 ; i < fil ; i++)
    {
        for(int j = 0 ; j < col ; j++)
        {
            if( i == j)
            {
                sumatoria += mat[i][j];
                printf("%d \t", mat[i][j]);
            }
            else
                printf("\t");
        }
        printf("\n");
    }

    printf("\n sumatoria de los elementos que pertenecen a la diagonal principal : %d", sumatoria);
}


void sumatoriaDiagonalSecundaria(int mat[][COL], int fil, int col)
{
    int sumatoria = 0;

    printf("\n\n Diagonal Secundaria :\n");

    for(int i = 0 ; i < fil ; i++)
    {
        for(int j = 0 ; j < col ; j++)
        {
            if( i + j == col - 1)
            {
                sumatoria += mat[i][j];
                printf("%d \t", mat[i][j]);
            }
            else
                printf("\t");
        }
        printf("\n");
    }

    printf("\n sumatoria de los elementos que pertenecen a la diagonal secundaria : %d \n\n", sumatoria);
}
