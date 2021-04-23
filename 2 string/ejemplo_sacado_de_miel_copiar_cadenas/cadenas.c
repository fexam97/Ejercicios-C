#include "cadenas.h"

char *strcpy1(char *dest, const char *orig) // importante el const
{
    char *aux = dest;

    while(*orig)
    {
        *dest = *orig;
        dest++;
        orig++;
    }
    *dest = '\0';

    return aux;
}


char *strcpy2(char *dest, const char *orig) // importante el const
{
    char *aux = dest;

    while(*orig)
    {
        *dest = *orig;
        dest++;
        orig++;
    }
    *dest = *orig;

    return aux;
}

char *strcpy3(char *dest, const char *orig) // importante el const
{
    char *aux = dest;

    while((*dest = *orig) != '\0')
    {
        dest++;
        orig++;
    }
    return aux;
}

char *strcpy4(char *dest, const char *orig) // importante el const
{
    char *aux = dest;

    while( (*dest++ = *orig++) != '\0')
    {
        ;
    }
    return aux;
}

/// Esta es la mas corta

char *strcpyR(char *dest, const char *orig) // importante el const
{
    char *aux = dest;

    if( (*dest = *orig) != '\0')
        strcpyR(dest + 1, orig + 1 );
    return aux;
}


