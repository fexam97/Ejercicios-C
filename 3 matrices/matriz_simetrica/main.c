#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define FIL 3
#define COL 3

void llenarMatriz(int mat[][COL], int fil, int col);
void mostrarMatriz(int mat[][COL], int fil, int col);
void esSimetrica(int mat[][COL], int fil, int col);

int main()
{
    int mat[FIL][COL];

    srand(time(NULL));

    llenarMatriz(mat, FIL, COL);

    mostrarMatriz(mat, FIL, COL);

    esSimetrica(mat, FIL, COL);



    return 0;
}

void llenarMatriz(int mat[][COL], int fil, int col)
{
    // me hace acordar discreta

    for(int i = 0 ; i < fil ; i++)
    {
        for(int j = 0; j < col ; j++)
        {
            mat[i][j] = rand()%2;
        }
    }
}

void mostrarMatriz(int mat[][COL], int fil, int col)
{
 for(int i = 0 ; i < fil ; i++)
    {
        for(int j = 0; j < col ; j++)
            printf("%d \t", mat[i][j]);

        printf("\n");
    }

}

void esSimetrica(int mat[][COL], int fil, int col)
{
    int NoEsSimetrica = 0;
    for(int i = 0 ; i < fil ; i++)
    {
        for(int j = 0; j < col ; j++)
            if(mat[i][j]!= mat[j][i]) // con que uno sea falso, basta para saber si es simetrica
                NoEsSimetrica = 1;
    }

    //band? printf("\n es simetrica"):printf("\n no es simetrica");

    if(NoEsSimetrica != 1)
        printf("\n Es simetrica");
    else
        printf("\n No es simetrica");

}
