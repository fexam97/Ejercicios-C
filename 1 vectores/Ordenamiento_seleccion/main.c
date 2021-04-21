#include <stdio.h>
#include <stdlib.h>

int intercambiar(int* v, int* v1);
int buscarMenor(int* v, int desde, int hasta);
void ordenarSeleccion(int* v, int cantElem);
void mostrarVector(int *v, int cantElem);

int main()
{
    printf("\t\t Metodo seleccion\n\n");
    printf("Busca el numero mas pequenio y lo pone en la primera posicion del vector\n");

    int vec[] = {34, 13, 8, 21, 1, 2, 5, 3};

    printf("Antes de ordenarlo \n");
    mostrarVector(&vec, 8);
    ordenarSeleccion(&vec, 8);
    printf("despues de ordenarlo \n");
    mostrarVector(&vec, 8);


    return 0;
}

int intercambiar(int* v, int* v1)
{
    int aux = *v;
        *v = *v1;
        *v1 = aux;

    return aux;
}

void ordenarSeleccion(int* v, int cantElem)
{
    int m; // variable donde guardara el numero menor

    for(int i = 0; i < cantElem - 1; i++)
    {
        m = buscarMenor(v, i, cantElem - 1);

        if(m != i)
            intercambiar(&v[m], &v[i]);
    }
}

int buscarMenor(int* v, int desde, int hasta)
{
    int m = desde;

    for(int j = desde + 1; j <= hasta; j++)
    {
        if(v[j] < v[m])
            m = j;
    }

    return m;
}

void mostrarVector(int* v, int cantElem)
{
    for(int i = 0; i < cantElem ; i++)
    {
        printf("%d \n", *v);
        v++;
    }
}
