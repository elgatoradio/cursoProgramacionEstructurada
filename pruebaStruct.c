#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

struct personalData
{
    char name[20];
    char lastName[20];
    int age;
};


int main()
{
    printf(" \nEstructura de Datos!! \n");

    struct personalData person;

    FILE *archivo;
    /* es para crear un archivo
    archivo = fopen("datosPersonales001.dat", "wb");
    */

    archivo = fopen("datosPersonales001.dat", "rb");

    if(archivo != NULL)
    {
        /*
        //limpiar datos de buffer
        fflush(stdin);

        printf("Leer los datos\n");
        printf("Ingresar nombre: \n");
        gets(person.name);
        
        printf("Ingresar apellido: \n");
        gets(person.lastName);


        printf("Ingresar edad: \n");
        scanf("%i", &person.age);

        printf("Imprimir datos: \n");
        printf("%s \n", person.name);
        printf("%s \n", person.lastName);
        printf("%i \n", person.age);

        fwrite(&person, sizeof(person), 1, archivo);
        */

        fread(&person, sizeof(person), 1, archivo);

        printf("\nImprimir datos\n");
        printf("Nombre: %s\n", person.name);
        printf("Apellido: %s \n", person.lastName);
        printf("Edad: %i \n\n", person.age);

        fclose(archivo);
    }
    else
    {
        printf("No se ha podido crear el archivo");
    }

    return 0;
}