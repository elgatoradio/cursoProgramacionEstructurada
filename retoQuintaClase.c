#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    int numA, numB;
    
    printf(" \nDame dos numeros enteros y te dire cual es el menor de ellos \n\n");
    printf(" \nIngresa el primer numero entero: ");
    scanf("%i", &numA);
    printf(" \nIngresa el segundo numero entero: ");
    scanf("%i", &numB);
    if(numA == numB)
        printf(" \nSon iguales \n\n");
    if(numA > numB)
        printf(" \n%i es menor \n\n", numB);
    if(numA < numB)
        printf(" \n%i es menor \n\n", numA);
    
    int calificacion;

    printf(" \n¿Cual es tu calificación? ");
    scanf("%i", &calificacion);

    if(calificacion < 60)
        printf(" \n\nEstas reprobado :( \n\n");
    else if(calificacion >= 60 && calificacion < 90)
        printf(" \n\nEstas aprobado :D \n\n");
    else if(calificacion >= 90 && calificacion <= 100)
        printf(" \n\nIralo hartas buenas calificaciones ñ.ñ\n\n");
    else
        printf(" \n\n#Error!! %i No es una calificacion valida!! \n\n", calificacion);
    
    return 0;
}