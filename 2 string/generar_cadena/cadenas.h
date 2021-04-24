#ifndef CADENAS_H
#define CADENAS_H

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

#define TAM_VEC 50

char *copiarCadena(char *dest, const char *orig); // funcion strcpy
char* concatenarCadena(char* destino, const char* origen); // funcion strcat
char* fstrupr (char* cad); // funcion toupper

#endif // CADENAS_H
