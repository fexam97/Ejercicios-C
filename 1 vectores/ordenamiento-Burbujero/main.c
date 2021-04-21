#include <stdio.h>
#include <stdlib.h>

void intercambiar(int* v, int* v1);
void ordenarBurbujeo(int* v, int cantElem);
void mostrarVector(int *v, int cantElem);


int main()
{
    printf("\t\t\t Metodo burbujeo \n");

    int vec[] = {34, 13, 8, 21, 1, 2, 5, 3};

    puts("Antes de ordenar");
    mostrarVector(&vec, 8);
    ordenarBurbujeo(&vec, 8);
    puts("despues de ordenar");
    mostrarVector(&vec, 8);

    return 0;
}

void intercambiar(int* v, int* v1)
{
    int  aux = *v;
         *v = *v1;
         *v1 = aux;

    return aux;
}

void ordenarBurbujeo(int* v, int cantElem)
{
    int i = 1;
    int huboIntercambios = 1;

    while(huboIntercambios && i < cantElem)
    {
        huboIntercambios = 0;

        for(int j = 0; j < cantElem - i ; j++)
        {
            if(v[j] > v[j+1])
            {
                intercambiar(&v[j], &v[j+1]);
                huboIntercambios = 1;
            }
        }

        i++;
    }
}

void mostrarVector(int *v, int cantElem)
{
    puts("");
    for(int i = 0 ; i < cantElem ; i++)
    {
        printf("%d \n", *v);
        v++;
    }
}
