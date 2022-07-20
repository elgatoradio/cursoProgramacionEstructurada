#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

char nombre[50] = {};
int calificacion = 0;

int evaluar(x)
{
    if (x > 6 && x <= 10)
    {
        printf(" \n\n%s esta aprobado con %i, felicidades!!\n\n", nombre, calificacion);
    }
    else if(x >= 0 & x < 6)
    {
        printf(" \n\n%s esta reprobado con %i, suerte para la proxima!!\n\n", nombre, calificacion);
    }
}

int main()
{
        printf(" \n\n¿Quieres saber si aprobaste?\n\n");
        printf("Nombre: ");
        scanf("%s", &nombre);
        printf(" \nCalificación: ");
        scanf("%i", &calificacion);

        while (calificacion < 0 || calificacion > 10)
        {   
            printf(" \n\n#Error!! calificacion invalida, debe ser entre 0 y 10\n");
            printf(" \nCalificación: ");
            scanf(" %i", &calificacion);
        }
        evaluar(calificacion);
    return 0;
}