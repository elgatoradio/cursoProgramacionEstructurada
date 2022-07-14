#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    int x = 10;
    int y = 5;
    int z;

    printf("El valor de x es= %i \n", x);
    printf("El valor de y es= %i \n \n", y);

    z = x;
    x = y;
    y = z;

    printf("El valor intercambiado de x es= %i \n", x);
    printf("El valor intercambiado de y es= %i \n", y);

    return 0;
}