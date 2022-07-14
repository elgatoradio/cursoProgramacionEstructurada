#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    float radioBase, alturaCilindro, areaBase, volumenCilindro, volu;

    printf("Vamos a calcular el volumen de un cilindro! \n \n");
    printf("Ingresa el radio de la base: ");
    scanf("%f", &radioBase);
    printf("Ingresa la altura del cilindro: ");
    scanf("%f", &alturaCilindro);

    areaBase = 3.1416 * (radioBase * radioBase);
    volumenCilindro = 3.1416 * ((radioBase * radioBase)*alturaCilindro);
    volu = areaBase * alturaCilindro;

    printf(" \nEl area de la base de la base es: %f \n", areaBase);
    printf("El volumen del cilindro es: %f \n  %f", volumenCilindro, volu);

    return 0;
}