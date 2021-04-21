#include <stdio.h>
#include <stdlib.h>

int main()
{
    //int vec[8];

    int vec[] = {1, 2, 3, 5, 8, 13, 21, 34};

    int a = vec[5]; // a: 13

    vec[5] = 11; /// cambiamos el valor 13 por 11

    printf("acceso, modificacion y recorrida del vector\n\n\n");

//Si queremos recorrer todo el vector, lo podemos hacer mediante una iteración
//definida, o sea mediante un ciclo for:

    for(int i = 0; i < 8 ; i++)
        printf("%Valor en la posicion %d: %d\n", i+1, vec[i]);

    return 0;
}
