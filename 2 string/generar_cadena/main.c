#include "cadenas.h"

int main()
{
    char cadena1[TAM_VEC];
    char cadena2[TAM_VEC];

    puts("Ingrese el nombre: ");
    gets(cadena1);

    puts("Ingrese el apellido:  ");
    gets(cadena2);

    char cadena3[TAM_VEC];
    char *aux;
    char *aux2;

    aux = copiarCadena(cadena3, cadena1);
    aux2 = concatenarCadena(cadena3, cadena2);

    printf("%s ", fstrupr(aux2)); //no se como ponerle la coma en el medio

    //printf("tercer string generado: %s", cadena3 );

    //strcpy(cadena3, cadena1);
    //strcat(cadena3, " ");
    //strcat(cadena3, cadena2);
    //printf("%s", cadena3);

    return 0;
}


