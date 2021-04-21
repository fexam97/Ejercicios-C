#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vec[5];  /// declaracion de un vector

    vec[2] = 4; /// asignacion a unos de los elementos del vector.

    vec[5] = 3 + vec[2]; /// asignacion de otro int con una expresion

    scanf("%d", &vec[2]); /// uso con scanf

    printf("%d", vec[5]);
    return 0;
}
