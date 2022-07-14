#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    int integerA = 1;
    float floatA = 1.1;
    double doubleA = 1.2;
    char letterA = 'A';
    
    //En la siguiente linea estamos imprimiento mi variable integerA
    printf("El valor de nuesto entero A es: %i \n", integerA);
    printf("El valor de nuesto flotante A es: %f \n", floatA);
    printf("El valor de nuesto double A es: %f \n", doubleA);
    printf("El valor de nuesto caracter A es: %c \n \n", letterA);
    
    printf("Ingresa el valor del entero A: ");
    scanf("%i", &integerA);

    printf("Ingresa el valor del foltante A: ");
    scanf("%f", &floatA);

    printf("Ingresa el valor del double A: ");
    scanf("%lf", &doubleA);

    printf("Ingresa el valor del caracter A: ");
    scanf(" %c", &letterA);

    printf(" \nEl valor de nuesto entero A es: %i \n", integerA);
    printf("El valor de nuesto flotante A es: %f \n", floatA);
    printf("El valor de nuesto double A es: %f \n", doubleA);
    printf("El valor de nuesto caracter A es: %c \n", letterA);
    return 0;
}