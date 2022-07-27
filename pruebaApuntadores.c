#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

int main()
{
    printf(" \nApuntadores\n\n");

    float val;
    float *apVal;
    apVal = & val;
    *apVal = 3.1416;

    printf("El valor de la variable val: %f \n", val);

    float val2;
    float *apVal2;

    apVal2=&val2;
    printf("Dirección: %p.\n",apVal2);//Opción 1 
    printf("Direccion: %p.\n",&val2); //Opción 2 

    *apVal2=5;
    printf("Valor de varieble: %f.",val2);

    return 0;
}