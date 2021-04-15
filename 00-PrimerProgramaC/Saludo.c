#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nombre[107];
    printf("Ingrese su nombre: ");
    fgets(nombre, 107, stdin);

    printf("Hola, %s\n", nombre);
    return 0;
}
