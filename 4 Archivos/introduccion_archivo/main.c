#include <stdio.h>
#include <stdlib.h>

#define TAM_VEC_ALU 8
#define ERROR_ARCH 1

typedef struct
{
    int legajo;
    char apyn[101];
    int cantMatAprob;
}
Alumno;


int main()
{
/*
        /// PRIMERO EJECUTA ESTO, DESPUES EJECUTÁ EL FOPEN SINO NO TE VA A COMPILAR

    FILE* archAlu = fopen("Alumnos.dat", "wb"); /// insert/refactor -> rename symbols
                                                /// y de ahi se cambia el nombre de las variables
    if(!archAlu)
    {
        puts("Error abriendo el archivo");
        return ERROR_ARCH;
    }

    Alumno vecAlu[TAM_VEC_ALU] =
    {
        {432, "Perez,       Juan",        23},
        {123, "Rodriguez,   Ariel",       12},
        {247, "Bermudez,    Alejandro",    2},
        {564, "Alvarez,     Alberto",     20},
        {999, "Casares,     Carlos",      40},
        {444, "Damasco,     Daniel",      30},
        {111, "Garcia,      Gabriel",     11},
        {333, "Fernandez,   Alberto",      1}
    };

    fwrite(vecAlu, sizeof(Alumno), TAM_VEC_ALU, archAlu);
*/


/*
    FILE* archAlu = fopen("Alumnos.dat", "rb");

    if(!archAlu)
    {
        puts("Error abriendo el archivo");
        return ERROR_ARCH;
    }

    Alumno alu;

    printf("NRO. LEGAJO\tAPELLIDO Y NOMBRE\t CANTIDAD DE MATERIAS APROBADAS\n");


    while(fread(&alu, sizeof(Alumno), 1 , archAlu) > 0)
    {
        printf("\t%d,\t %s,\t\t  %d\n", alu.legajo, alu.apyn, alu.cantMatAprob);
    }

    fclose(archAlu);
*/
    return 0;

}

