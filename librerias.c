#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>
#include "operaciones.h"

int main()
{
    printf(" \nLibrerias!!\n\n");

    float firtsValue = 10, secondValue = 15, result;
    int option;

    printf("Soy una calculadora!\n");
    printf("¿Que operacion deseas realizar?\n");
    printf("1. Suma\n");
    printf("2. Resta\n");
    printf("3. Multiplicacion\n");
    printf("4. Division\n");
    printf("Elige una opcion\n");

    scanf("%i", &option);

    switch (option)
    {
    case 1:
        result = addition(firtsValue, secondValue);
        printf("La suma es: %f", result);
        break;
    case 2:
        result = substraction(firtsValue, secondValue);
        printf("La resta es: %f", result);
        break;
    case 3:
        result = multiplication(firtsValue, secondValue);
        printf("La multiplicacion es: %f", result);
        break;
    case 4:
        result = division(firtsValue, secondValue);
        printf("La division es: %f", result);
        break;
    default:
        printf("Esa opcion no es valida");
        break;
    }

    return 0;
}