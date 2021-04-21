#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    char nombre[20];
    int nota;
}
t_alumno;

int main()
{
    t_alumno alu = {"Manuel", 9};
    t_alumno *p;

    p = &alu;

    printf("nombre : %s\n", p->nombre);
    printf("nota : %d", p->nota);

    return 0;
}
