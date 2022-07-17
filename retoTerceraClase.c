#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    int x = 10;

    x += 2 * x;

    printf("Valor de x es: %i \n", x);

    int modulo;

    printf(" \nIngresa un numero entero: ");
    scanf("%i", &modulo);
    
    modulo = (modulo%5);

    printf(" \nEl resultado es: %i", ++modulo);

    return 0;
}