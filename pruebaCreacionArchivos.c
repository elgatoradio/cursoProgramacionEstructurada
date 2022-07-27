#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

int main()
{
    printf(" \nArchivos! Crear un archivo\n");

    FILE *archivo;

    archivo = fopen("archivo001.dat", "w");

    if(archivo != NULL)
    {
        printf(" \nEl archivo se ha creado exitosamente\n");
        fclose(archivo);
    }
    else
    {
        printf(" \nEl archivo no se ha creado\n");
    }

    return 0;
}