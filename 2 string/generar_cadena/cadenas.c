#include "cadenas.h"

char *copiarCadena(char *destino, const char *origen)
{
    char *aux = destino;  //inicio del array

    while(*origen) // hasta encontrar el caracter '\0'
    {
        *destino = *origen; // le asigna el primer caracter a destino

        destino++; // avanza una posicion
        origen++; //    ""    ""   ""
    }

    *destino = '\0'; // una vez que origen encontro el caracter '\0' tambien destino tendra su '\0'

    return aux; // retorna el puntero
}


char* concatenarCadena(char* destino, const char* origen)
{
    char* aux = destino; //empieza

    while(*destino) // recorre toda la cadena
    {
        destino++;
    }
    while(*origen) // recorre todo el origen, pero
    {
        *destino = *origen; //se le asigna nuevas posiciones al destino
        origen++;   // aumenta una posicion
        destino++;
    }

    *destino = ' '; // entonces tenemos a destinos con mas contenido en el vector

    return aux;
}

char* fstrupr (char* cad)
{
  char* aux = cad;

  while (*aux && (*aux) >= 'a' && (*aux) <= 'z')
  {
   *aux -= 32;
    aux++;
  }
  return (char*)cad;
}
