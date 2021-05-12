#include <stdio.h>
#include <stdlib.h>

void intercambio_char(char *a, char *b);
char* invertir_cadena(char* s);
char* pos_fin(const char* s); // posicion final


int main()
{

    char cadena[] = "Boquita el mas grande";

    printf("%s \n", cadena);

    printf("%s", invertir_cadena(cadena));

    return 1;
}


void intercambio_char(char *a, char *b)
{
    *a += *b;
    *b = *a-*b;
    *a -= *b;
}

char* invertir_cadena(char* s)
{
    char* inicio = s;
    char* fin = pos_fin(s);
    while(s<fin)
    {
        intercambio_char(s, fin); // asi es, no retorna nada
        s++;
        fin--;
    }
    return inicio;
}

char* pos_fin(const char* s)
{
    char* fin = (char*)s;
    while(*fin) // fin = '\0'
    {
        fin++;
    }
    return --fin;
}
