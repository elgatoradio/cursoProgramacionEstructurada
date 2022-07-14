#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    float gradosF, gradosC, gradosC2;

    printf("Vamos a transformar grados Fahrenheit a grados Celsius! \n \n");
    printf("Ingresa la temperatura en grados Fahrenheit: ");
    scanf("%f", &gradosF);

    gradosC = (gradosF - 32)/1.800;
    gradosC2 = ((gradosF - 32)*5)/9;

    printf(" \nLa temperatura en grados Celsius es: %f \n", gradosC);
    printf("La temperatura en grados Celsius es: %f \n", gradosC2);

    return 0;
}