#include "funciones.h"

void cargarMatriz(int mat[][COL], int fil, int col)
{
    int cont = 1;

    for(int i = 0; i < fil ; i++)
    {
        for(int j = 0; j < col ; j++)
        {
            mat[i][j] = cont;
            cont++;
        }
    }
}

void mostrarMatriz(int mat[][COL], int fil, int col)
{

    printf("\n\n\n matriz %d x %d : \n\n", fil, col);

    for(int i = 0; i < fil ; i++)
    {
        for(int j = 0 ; j < col ; j++)
            printf("%d\t", mat[i][j]);

        printf("\n");
    }

}

void mostrarDiagonalPri(int mat[][COL], int fil, int col)
{
    printf("\n*****************************************************");
    printf("\n\n Diagonal principal: \n\n");
    for(int i = 0; i < fil ; i++)
    {
        for(int j = 0; j < col ; j++)
        {
            if( i == j)
                printf("%d \t", mat[i][j]);
            else
                printf("\t");
        }

        printf("\n");
    }
}

void mostrarElemDiagonalPri(int mat[][COL], int fil, int col)
{
    printf("\n\n Elementos de la diagonal superior: \n\n");
    for(int i = 0; i < fil ; i++)
    {
        for(int j = 0; j < col ; j++)
        {
            if( i <= j)
                printf("%d \t", mat[i][j]);
            else
                printf("\t");
        }

        printf("\n");
    }

}

void sumatoriaDiagPrincipal(int mat[][COL], int fil, int col)
{
    int sumatoria = 0; // acumulador

    for(int i = 0; i < fil ; i++)
    {
        for(int j = 0; j < col ; j++)
        {
            if( i <= j)
                sumatoria += mat[i][j];
        }
    }
    printf(" Sumatoria de elementos de la diagonal superior: %d  \n\n", sumatoria);
    return sumatoria;
}

void mostrarDiagonalSec(int mat[][COL], int fil, int col)   ///      j   j   j
{
    printf("*****************************************************");
                                                            ///
    printf("\n diagonal inferior: \n\n ");                  /// i    1   2   3
                                                            /// i    4   5   6
    for(int i = 0 ; i < fil ; i++) ///fila                  /// i    7   8   9
    {                                                       ///
        for(int j = 0 ; j < col ; j++ )                     /// tengo que mostrar
        {
            if( i + j == col - 1 )/// 0+0 == 3 - 1          ///              3                      mat[0][3]
                                                            ///          5                  mat[1][2]
                    printf("%d \t", mat[i][j]);             ///      7              mat[2][1]
            else
                    printf("\t");                           /// j va disminuyendo
        }
        printf("\n");
    }

    printf ("\n");

}

void mostrarElemDiagonalSec(int mat[][COL], int fil,int col)
{
    printf("\n diagonal inferior: \n\n ");

    for(int i = 0 ; i < fil ; i++)
    {
        for(int j = 0 ; j < col ; j++ )
        {
            if( i + j >= col - 1 ) /// parecido a los elementos de la diagonal principal

                    printf("%d \t", mat[i][j]);
            else
                    printf("\t", mat[i][j]);
        }
        printf("\n");
    }

    printf ("\n");
}

void sumatoriaDiagSecundaria(int mat[][COL], int fil,int col)
{
    int sumatoria = 0;
    printf("\n\n\n ");

    for(int i = 0 ; i < fil ; i++)
    {
        for(int j = 0 ; j < col ; j++ )
        {
            if( i + j >= col - 1 )

                    sumatoria += mat[i][j];
        }
        printf("\n");
    }

    printf(" Sumatoria de elementos de la diagonal inferior: %d  \n\n", sumatoria);
}
