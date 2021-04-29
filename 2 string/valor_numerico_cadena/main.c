#include <stdio.h>
#include <stdlib.h>

size_t _strlen(char* cad);
int cadena_a_entero(char* cad);

int main()
{
    char* cad = "muevete";
    int numero = cadena_a_entero(cad);
    numero += 1050;
    printf("Numero: %d", numero);

    return 0;
}

size_t _strlen(char* cad)
{
    size_t l = 0;
    while(*cad)
    {
        l++;
        cad++;
    }
    return l; // Por el \0;
}

int cadena_a_entero(char* cad)
{
    int m10[] = {1, 10, 100, 1000, 10000, 100000, 1000000};
    int tam = _strlen(cad)-1;
    int resp = 0;
    while(*cad)
    {
        resp+= (*cad-'0') * m10[tam];
        cad++;
        tam--;
    }
    return resp;
}
